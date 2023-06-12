#include "predictor/predictor.h"

using namespace std;

PREDICTOR *brpred;


typedef struct{
    uint64_t inst_sum;
    uint64_t inst_jmp;

    uint64_t inst_br;
    uint64_t inst_jal  ;
    uint64_t inst_jalr ;
    uint64_t inst_call ;
    uint64_t inst_ret  ;
    uint64_t inst_ret_call  ;


    uint64_t exec_taken;
    uint64_t pred_taken;

    uint64_t miss_pred; 
    uint64_t miss_br  ; 
    uint64_t miss_jal ; 
    uint64_t miss_jalr; 
    uint64_t miss_call; 
    uint64_t miss_ret ; 
    uint64_t miss_ret_call;

} summary_t;


summary_t summary;

execInfo_t execInfo_fifo[10];
UINT64      PC_fifo[10];
OpType_t    opType_fifo[10];

void GshareInit(){

    brpred = new PREDICTOR();

    summary.inst_sum   = 0;
    summary.inst_jmp   = 0;
    summary.inst_br    = 0;
    summary.inst_jal   = 0;
    summary.inst_call  = 0;
    summary.inst_jalr  = 0;
    summary.inst_ret   = 0;
    summary.inst_ret_call = 0;

    summary.exec_taken = 0;
    summary.pred_taken = 0;

    summary.miss_pred  = 0;
    summary.miss_br    = 0;
    summary.miss_jal   = 0;
    summary.miss_jalr  = 0;
    summary.miss_call  = 0;
    summary.miss_ret   = 0;
    summary.miss_ret_call = 0;
    
}

#define IDEAL
#define DELAY 2


bool GsharePredict(uint64_t PC, uint8_t type, bool taken, uint64_t targetPC){

    OpType_t opType;


    opType = OPTYPE_NULL;
    if(BITS(type, 0)) opType = OPTYPE_BR;
    if(BITS(type, 1)) opType = OPTYPE_JALR;
    if(BITS(type, 2)) opType = OPTYPE_JAL;
    if(BITS(type, 3)) opType = OPTYPE_RET;
    if(BITS(type, 4)) opType = OPTYPE_CALL;
    if(BITS(type, 5)) opType = OPTYPE_RET_CALL;



    //get Prediction info
    predInfo_t predInfo;
    predInfo = brpred->GetPrediction(PC, opType);

    //get Execution info
    execInfo_t execInfo;
    execInfo.execDir = taken;
    execInfo.execTargetPC = targetPC;

    execInfo.mispred = 0;
    if(execInfo.execDir != predInfo.predDir) execInfo.mispred = 1;
    else if(execInfo.execDir == 1){
        if(execInfo.execTargetPC != predInfo.predTargetPC) execInfo.mispred = 1;
    } 

#ifdef IDEAL

// NOTE ideal predictor
// NOTE we assume execute info get immeduately after GetPrediction
// NOTE we assume ras clear if ret mispred

    brpred->UpdateTable(PC, opType, execInfo, 0);
    brpred->UpdateRAS(PC, opType, execInfo);
    brpred->UpdateGHR(opType, execInfo.execDir);    //GHR update later

#else

// NOTE actual predictor
// NOTE we assume execute info get 5 cycle delay after GetPrediction
// NOTE we assume ras clear if mispred


    for(int i = 9; i > 0; i--){
        PC_fifo[i] = PC_fifo[i-1];
        opType_fifo[i] = opType_fifo[i-1];
        execInfo_fifo[i] = execInfo_fifo[i-1];
    }


    PC_fifo[0] = PC;
    opType_fifo[0] = opType;
    execInfo_fifo[0] = execInfo;



    brpred->UpdateTable(PC_fifo[DELAY], opType_fifo[DELAY], execInfo_fifo[DELAY], DELAY);
    brpred->UpdateRAS(PC_fifo[DELAY], opType_fifo[DELAY], execInfo_fifo[DELAY]);
    //if(execInfo_fifo[DELAY].mispred) brpred->RollbackGHR(DELAY);

    brpred->UpdateGHR(opType, execInfo.execDir);    //GHR update immediately
    

#endif


    summary.inst_sum++;

    if(opType != OPTYPE_NULL){

        if(BITS(type, 0)) summary.inst_br++;
        if(BITS(type, 1)) summary.inst_jalr++;
        if(BITS(type, 2)) summary.inst_jal++;
        if(BITS(type, 3)) summary.inst_ret++; 
        if(BITS(type, 4)) summary.inst_call++;
        if(BITS(type, 5)) summary.inst_ret_call++;
        


        summary.inst_jmp = summary.inst_jalr + summary.inst_jal + summary.inst_br;

        if(execInfo.execDir == TAKEN) summary.exec_taken++;
        if(predInfo.predDir == TAKEN) summary.pred_taken++;

        if(execInfo.mispred) {

            summary.miss_pred++;

            if(BITS(type, 0)) summary.miss_br++;
            if(BITS(type, 1)) summary.miss_jalr++;
            if(BITS(type, 2)) summary.miss_jal++;
            if(BITS(type, 3)) summary.miss_ret++; 
            if(BITS(type, 4)) summary.miss_call++;
            if(BITS(type, 5)) summary.miss_ret_call++;

        }

    }

    return false;

    
}










void GetPredictorReport(){

    printf("-------------- RAS: %d PHT: %d BTB: %d  -------------\n", RAS_SIZE, PHT_LEN, BTB_LEN);
    printf("-------------- PREDICTOR SUMMARY REPORT -------------\n");
    printf("-------------- total  inst:\t %6ld -------------\n", summary.inst_sum );
    printf("-------------- branch inst:\t %6ld -------------\n", summary.inst_jmp );
    printf("-------------- jalr   inst:\t %6ld -------------\n", summary.inst_jalr);
    printf("-------------- jal    inst:\t %6ld -------------\n", summary.inst_jal );
    printf("-------------- br     inst:\t %6ld -------------\n", summary.inst_br  );
    printf("-------------- call   type:\t %6ld -------------\n", summary.inst_call);
    printf("-------------- ret    type:\t %6ld -------------\n", summary.inst_ret );
    printf("-------------- retcal type:\t %6ld -------------\n", summary.inst_ret_call );
    printf("-----------------------------------------------------\n");
    printf("-------------- exec  taken:\t %6ld -------------\n", summary.exec_taken);
    printf("-------------- pred  taken:\t %6ld -------------\n", summary.pred_taken);
    printf("-----------------------------------------------------\n");
    printf("-------------- miss   pred:\t %6ld -------------\n", summary.miss_pred );
    printf("-------------- miss   br  :\t %6ld -------------\n", summary.miss_br);
    printf("-------------- miss   jal :\t %6ld -------------\n", summary.miss_jal);
    printf("-------------- miss   jalr:\t %6ld -------------\n", summary.miss_jalr );
    printf("-------------- miss   call:\t %6ld -------------\n", summary.miss_call );
    printf("-------------- miss   ret :\t %6ld -------------\n", summary.miss_ret );
    printf("-------------- miss   retcall :\t %6ld -------------\n", summary.miss_ret_call );
    printf("               Accuracy   :\t %6f%%\n", 100.0*(summary.inst_jmp - summary.miss_pred) /summary.inst_jmp );

    //delete brpred; 

}


