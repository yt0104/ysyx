#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


#define UINT32      unsigned int
#define INT32       int
#define UINT64      unsigned long long
#define COUNTER     unsigned long long


#define NOT_HIT 0
#define HIT 1

#define NOT_TAKEN 0
#define TAKEN 1

#define FAILURE 0
#define SUCCESS 1


typedef struct 
{
  bool info_vld;
  bool predDir;
  UINT64 predTargetPC;

  bool phtPredDir;

}predInfo_t;


typedef struct 
{
  bool mispred;
  bool execDir;
  UINT64 execTargetPC;

}execInfo_t;


typedef struct 
{
  bool vld;
  UINT64 tag;
  UINT64 targetPC;

}btbEntry_t;


typedef struct 
{
  UINT32 bimodel: 2;

}phtEntry_t;




//JD2_17_2016 break down types into COND/UNCOND
typedef enum {
  OPTYPE_NULL,
  OPTYPE_CALL,    //jal inst
  OPTYPE_RET,     //jalr inst
  OPTYPE_BR,      //branch inst
  OPTYPE_JAL,       //jal: rd==0
  OPTYPE_JALR,      //jalr: rd==0
  
}OpType_t;



static inline UINT32 SatIncrement(UINT32 x, UINT32 max)
{
  if(x<max) return x+1;
  return x;
}

static inline UINT32 SatDecrement(UINT32 x)
{
  if(x>0) return x-1;
  return x;
}



#endif

