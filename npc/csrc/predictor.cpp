#include "predictor/predictor_gshare.h"

using namespace std;

PREDICTOR *brpred;


typedef struct{
    uint64_t inst_sum;
    uint64_t inst_jmp;

    uint64_t inst_br;
    uint64_t inst_jal  ;
    uint64_t inst_call ;
    uint64_t inst_jalr ;
    uint64_t inst_ret  ;


    uint64_t exec_taken;
    uint64_t pred_taken;

    uint64_t mis_pred;
    uint64_t br_miss;
    uint64_t jal_miss;
    uint64_t jalr_miss;
    uint64_t call_miss;
    uint64_t ret_miss;

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

    summary.exec_taken = 0;
    summary.pred_taken = 0;

    summary.mis_pred   = 0;
    summary.br_miss    = 0;
    summary.jal_miss   = 0;
    summary.jalr_miss  = 0;
    summary.call_miss  = 0;
    summary.ret_miss   = 0;
    
}


void GsharePredict(uint64_t PC, uint8_t type, bool taken, uint64_t targetPC){

    OpType_t op_type;


    op_type = OPTYPE_NULL;
    if((type) & 1) op_type = OPTYPE_BR;
    if((type >> 1) & 1) op_type = OPTYPE_JALR;
    if((type >> 2) & 1) op_type = OPTYPE_JAL;
    if((type >> 3) & 1) op_type = OPTYPE_RET;
    if((type >> 4) & 1) op_type = OPTYPE_CALL;
    


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

        if(op_type == OPTYPE_RET)  summary.inst_ret++; 
        if(op_type == OPTYPE_CALL) summary.inst_call++;
        if(op_type == OPTYPE_BR)  summary.inst_br++;
        if(op_type == OPTYPE_JAL || op_type == OPTYPE_CALL) summary.inst_jal++;
        if(op_type == OPTYPE_JALR || op_type == OPTYPE_RET) summary.inst_jalr++;


        summary.inst_jmp = summary.inst_jalr + summary.inst_jal + summary.inst_br;

        if(execInfo.execDir == TAKEN) summary.exec_taken++;
        if(predInfo.predDir == TAKEN) summary.pred_taken++;

        if(execInfo.mispred) {

            summary.mis_pred++;

            if(op_type == OPTYPE_RET) summary.ret_miss++;
            if(op_type == OPTYPE_CALL) summary.call_miss++;
            if(op_type == OPTYPE_BR)  summary.br_miss++;
            if(op_type == OPTYPE_JAL || op_type == OPTYPE_CALL) summary.jal_miss++;
            if(op_type == OPTYPE_JALR || op_type == OPTYPE_RET) summary.jalr_miss++;

        }


    }

    //if(predInfo.info_vld && ( op_type == OPTYPE_RET || op_type) ){
    //    printf("ras_predict--> pc = 0x%lx, type = %d--> exec: %d, 0x%llx --> pred: %d, 0x%llx\n", 
    //        PC, type, execInfo.execDir, execInfo.execTargetPC, predInfo.predDir, predInfo.predTargetPC);
    //}


}


void GetPredictorReport(){

    printf("-------------- PREDICTOR SUMMARY REPORT -------------\n");
    printf("-------------- total  inst:\t %6ld -------------\n", summary.inst_sum );
    printf("-------------- branch inst:\t %6ld -------------\n", summary.inst_jmp );
    printf("-------------- jalr   type:\t %6ld -------------\n", summary.inst_jalr);
    printf("-------------- jal    type:\t %6ld -------------\n", summary.inst_jal );
    printf("-------------- br     type:\t %6ld -------------\n", summary.inst_br  );
    printf("-------------- call   inst:\t %6ld -------------\n", summary.inst_call);
    printf("-------------- ret    inst:\t %6ld -------------\n", summary.inst_ret );

    printf("-------------- exec  taken:\t %6ld -------------\n", summary.exec_taken);
    printf("-------------- pred  taken:\t %6ld -------------\n", summary.pred_taken);
    printf("-------------- miss   pred:\t %6ld -------------\n", summary.mis_pred );
    printf("-------------- miss   br  :\t %6ld -------------\n", summary.br_miss);
    printf("-------------- miss   jal :\t %6ld -------------\n", summary.jal_miss );
    printf("-------------- miss   jalr:\t %6ld -------------\n", summary.jalr_miss  );
    printf("-------------- miss   call:\t %6ld -------------\n", summary.call_miss  );
    printf("-------------- miss   ret :\t %6ld -------------\n", summary.ret_miss );
    printf("               Accuracy   :\t %6f%%\n", 100.0*(summary.inst_jmp - summary.mis_pred) /summary.inst_jmp );

    //delete brpred; 

}


