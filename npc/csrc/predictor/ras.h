#include "utils.h"

using namespace std;


typedef struct 
{
  bool pop_vld;
  UINT64 returnPC;

}rasEntry_t;


class RAS {
	public:
		RAS(int size);// constructor
		~RAS();
		void Push(const rasEntry_t x);
		rasEntry_t Pop();
		rasEntry_t Top();
		
		void DisplayStack();
		bool IsEmpty() { return top == -1; }
		bool IsFull() { return top == maxTop; }
		void Clear() {top = -1; }
	private:
		int maxTop;// max stack size = size -1
		int top;// current top of stack
		rasEntry_t* ras;// element array
		void ShiftPush(const rasEntry_t entry);
		
		
};



RAS::RAS(int size) {
	maxTop = size -1;
	ras = new rasEntry_t[size];
	top = -1;

    for(UINT32 i=0; i< size; i++){
	  	ras[i].pop_vld = 0;
      	ras[i].returnPC = 0; 
    }
}

RAS::~RAS() { 
	delete[] ras; 
}

		
void RAS::Push(const rasEntry_t entry) {
	if (IsFull())
		ShiftPush(entry);
	else 
		ras[++top] = entry;

	//DisplayStack();
}


void RAS::ShiftPush(const rasEntry_t entry) {

	for (size_t i = 0; i < maxTop; i++)
	{
		ras[i] = ras[i+1];
	}
	
	ras[maxTop] = entry;
}


rasEntry_t RAS::Pop() 
{
	rasEntry_t entry;

	if (IsEmpty()) {
		entry.pop_vld = 0;
	}
	else {
		entry = ras[top--];
		entry.pop_vld = 1;
	}
	return entry;
}




rasEntry_t RAS::Top() 
{
	if (IsEmpty()) 
	{
		cout<< "Error: the stack is empty." << endl;
		rasEntry_t temp;
		return temp;
	}
	else
		return ras[top];
}


void RAS::DisplayStack() 
{
	printf("top -->");
	for (int i= top; i>= 0; i--) 
		printf("\t|\t returnPC = 0x%llx\t|\n", ras[i].returnPC );
}
