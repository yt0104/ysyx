#ifndef _PREDICTOR_H_
#define _PREDICTOR_H_

#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <inttypes.h>
#include <math.h>

#include "ras.h"

#define PHT_CTR_MAX  3  //2'b11
#define PHT_CTR_INIT 2  //2'b10

#define PC_LEN    48
#define HIST_LEN  32


#define RAS_SIZE  12  //SIZE = 18: full 2  SIZE = 15: full 15 COREMARK: RAS: 12-->18  ret miss: 5->2
#define PHT_LEN   15
#define BTB_LEN   12

#define TAG_LEN   PC_LEN - BTB_LEN




class PREDICTOR{

  // Gshare

 private:
  UINT64  ghr;           // global history register
  UINT32  historyLength; // history length 

  phtEntry_t *pht;         // pattern history table
  UINT32  numPhtEntries; // entries in pht

  btbEntry_t *btb;         // branch target table
  UINT32  numBtbEntries; // entries in btb


  void updatePht(bool predDir);
  void updateBtb(bool predDir, UINT64 PC, UINT64 targetPC);

  UINT32 GetPhtHashIndex(UINT64 PC){
    return (PC^ghr) % (numPhtEntries);
  }

  UINT32 GetBtbHashIndex(UINT64 PC){
    return PC % numBtbEntries;
  }

  UINT64 GetBtbTag(UINT64 PC){
    return PC>>BTB_LEN;
  }

 public:

  RAS *ras;
  PREDICTOR(void);
  ~PREDICTOR(void);
  predInfo_t  GetPrediction(UINT64 PC, OpType_t op_type);  
  void        UpdatePredictor(UINT64 PC, OpType_t op_type, execInfo_t exec_info);

};

/////////////// STORAGE BUDGET JUSTIFICATION ////////////////
// Total storage budget: 32KB + 17 bits +
// Total PHT counters: 2^17 
// Total PHT size = 2^17 * 2 bits/counter = 2^18 bits = 32KB
// Total BTB counters: 
// Total BTB size = 
// GHR size: 17 bits
// Total Size = PHT size + GHR size + BTB size
/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

PREDICTOR::PREDICTOR(void){

  historyLength    = HIST_LEN;
  ghr              = 0;

  numPhtEntries    = (1<< PHT_LEN);
  pht = new phtEntry_t[numPhtEntries];

  numBtbEntries    = (1<< BTB_LEN);
  btb = new btbEntry_t[numBtbEntries];

  for(UINT32 i=0; i< numPhtEntries; i++){
    pht[i].bimodel = PHT_CTR_INIT; 
  }
  for(UINT32 i=0; i< numBtbEntries; i++){
    btb[i].vld = 0; 
    btb[i].tag = 0; 
    btb[i].targetPC = 0; 
  }

  ras = new RAS(RAS_SIZE);

}

PREDICTOR::~PREDICTOR(void){

  delete[] ras; 
  delete[] pht; 
  delete[] btb; 

}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

//NOTE get branch prediction result 
predInfo_t  PREDICTOR::GetPrediction(UINT64 PC, OpType_t op_type){

  UINT32 phtIndex   = GetPhtHashIndex(PC);
  phtEntry_t pht_entry = pht[phtIndex];

  UINT32 BtbIndex   = GetBtbHashIndex(PC);
  btbEntry_t btb_entry = btb[BtbIndex];

  bool pht_dir;
  bool btb_hit;
  UINT64 btb_targetPC;

  if(pht[phtIndex].bimodel > (PHT_CTR_MAX/2)){ 
    pht_dir = TAKEN; 
  }
  else{
    pht_dir = NOT_TAKEN; 
  }

  if(btb_entry.vld == 1 && btb_entry.tag == GetBtbTag(PC)){
    btb_targetPC = btb_entry.targetPC;
    btb_hit = HIT;
  }
  else {
    btb_targetPC = 0;
    btb_hit = NOT_HIT;
  }
  

  predInfo_t pred_info;

  
  if(pht_dir == TAKEN && btb_hit == HIT){ //get pht&btb prediction result
    pred_info.predDir = TAKEN;
    pred_info.predTargetPC = btb_targetPC;
  }
  else {
    pred_info.predDir = NOT_TAKEN;
    pred_info.predTargetPC = 0;
  }

  //return
  if(op_type == OPTYPE_NULL){
    pred_info.info_vld = 0;
    return pred_info;
  }
  else if(op_type == OPTYPE_RET){    //return ras pop prediction
    pred_info.info_vld = 1;
    rasEntry_t ras_entry = ras->Pop();
    if(ras_entry.pop_vld){
      pred_info.predDir = TAKEN;
      pred_info.predTargetPC = ras_entry.returnPC;
    }
  }
  else if(op_type == OPTYPE_RET_CALL){  //return pht&btb prediction
    pred_info.info_vld = 1;
    rasEntry_t ras_entry = ras->Pop();
  }
  else{      //return pht&btb prediction
    pred_info.info_vld = 1;
    return pred_info;
  }
  return pred_info;

}


/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

//NOTE update Predictor from execute & prediction info
//NOTE we assume execute info is right
void  PREDICTOR::UpdatePredictor(UINT64 PC, OpType_t op_type, execInfo_t exec_info){

  UINT32 phtIndex   = GetPhtHashIndex(PC);
  UINT32 BtbIndex   = GetBtbHashIndex(PC);

  if(op_type == OPTYPE_NULL){
    return;
  }

  if(op_type == OPTYPE_BR){

    // update the GHR: BR TAKEN
    ghr = (ghr << 1);

    if(exec_info.execDir == TAKEN){
      ghr++; 
    }

    // update the PHT: BR TAKEN
    if(exec_info.execDir == TAKEN){
      pht[phtIndex].bimodel = SatIncrement(pht[phtIndex].bimodel, PHT_CTR_MAX);
    }else{
      pht[phtIndex].bimodel = SatDecrement(pht[phtIndex].bimodel);
    }
  }
  

  // update the BTB: TAKEN
  if(exec_info.execDir == TAKEN){
    btb[BtbIndex].vld = 1;
    btb[BtbIndex].tag = GetBtbTag(PC);
    btb[BtbIndex].targetPC = exec_info.execTargetPC;
  }


  // update the RAS: 
  if(op_type == OPTYPE_RET || op_type == OPTYPE_RET_CALL){  //return
    if(exec_info.mispred) {
      ras->Clear();
    }
  }
  if(op_type == OPTYPE_CALL || op_type == OPTYPE_RET_CALL){  //call
    rasEntry_t rasEntry;
    rasEntry.returnPC = PC + 4;
    ras->Push(rasEntry);
  }

}



#endif

