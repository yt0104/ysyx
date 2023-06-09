#include "predictor/predictor_gshare.h"

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



bool GsharePredict(uint64_t PC, uint8_t type, bool taken, uint64_t targetPC){

    OpType_t op_type;


    op_type = OPTYPE_NULL;
    if(BITS(type, 0)) op_type = OPTYPE_BR;
    if(BITS(type, 1)) op_type = OPTYPE_JALR;
    if(BITS(type, 2)) op_type = OPTYPE_JAL;
    if(BITS(type, 3)) op_type = OPTYPE_RET;
    if(BITS(type, 4)) op_type = OPTYPE_CALL;
    if(BITS(type, 5)) op_type = OPTYPE_RET_CALL;


    predInfo_t predInfo;

    predInfo = brpred->GetPrediction(PC, op_type);

    execInfo_t execInfo;
    execInfo.execDir = taken;
    execInfo.execTargetPC = targetPC;

    execInfo.mispred = 0;
    if(execInfo.execDir != predInfo.predDir) execInfo.mispred = 1;
    else if(execInfo.execDir == 1){
        if(execInfo.execTargetPC != predInfo.predTargetPC) execInfo.mispred = 1;
    } 
    

    brpred->UpdatePredictor(PC, op_type, execInfo);


    summary.inst_sum++;

    if(op_type != OPTYPE_NULL){

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


    if( execInfo.mispred && predInfo.info_vld && ( op_type == OPTYPE_RET_CALL) ){
        //printf("ras_predict--> pc = 0x%lx, type = %d--> exec: %d, 0x%llx --> pred: %d, 0x%llx\n", 
        //    PC, type, execInfo.execDir, execInfo.execTargetPC, predInfo.predDir, predInfo.predTargetPC);
        //brpred->ras->DisplayStack();
        //return true;
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


