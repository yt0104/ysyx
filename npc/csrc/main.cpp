#include "Vsw.h"
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

      int main(int argc, char** argv, char** env) {
 
  	VerilatedContext* contextp = new VerilatedContext;
  	contextp->commandArgs(argc, argv);
  	Vsw* top = new Vsw{contextp};
	  
	VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  	contextp->traceEverOn(true); //打开追踪功能
  	top->trace(tfp, 0); //
  	tfp->open("wave.vcd"); //设置输出的文件wave.vcd

	        int main_time = 0;     // 仿真时间戳
	  	int sim_time = 50;   // 最大仿真时间戳
	  
		while (!Verilated::gotFinish() && main_time < sim_time) {
		  int a = rand() & 1;
		  int b = rand() & 1;
		  top->a = a;
		  top->b = b;
		  top->eval();
		  printf("#time = %d, a = %d, b = %d, f = %d\n", main_time, a, b, top->f);
		  
		   
		  tfp->dump(contextp->time()); //dump wave
		  contextp->timeInc(1); //推动仿真时间
		  
		  
		  assert(top->f == (a ^ b));
		  
		  main_time ++;
		}
		
          delete top;
          tfp->close();
          delete contextp;
          exit(0);
      }


//******命令
//1.	verilator -Wall sw.v sim_main.cpp --cc --trace --exe --build
//2.	./obj_dir/Vsw
//3.	gtkwave sw.vcd










