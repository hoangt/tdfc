// cctdfc autocompiled header file
// tdfc version 1.160
// Tue Mar  8 20:27:00 2011

#include "Score.h"
#include <iostream>
#include <fstream>
#include <pthread.h>
using namespace std;
#ifdef __cplusplus
typedef struct {
   int i0;
   int i1;
   int i2;
} EnableCoalesceStageData_arg;

class EnableCoalesceStageData: public ScoreOperator {
public: 
  EnableCoalesceStageData(unsigned long i0,BOOLEAN_SCORE_STREAM i1,DOUBLE_SCORE_STREAM i2,DOUBLE_SCORE_STREAM i3);
  void *proc_run();
  void get_graphviz_strings();
private: 
  unsigned long cc_LATENCY;
  pthread_t rpt;
  static ScoreOperatorElement *instances;
};
typedef EnableCoalesceStageData* OPERATOR_EnableCoalesceStageData;
#define NEW_EnableCoalesceStageData new EnableCoalesceStageData
#else
typedef void* OPERATOR_EnableCoalesceStageData;
void *NEW_EnableCoalesceStageData(unsigned long i0,BOOLEAN_SCORE_STREAM i1,DOUBLE_SCORE_STREAM i2,DOUBLE_SCORE_STREAM i3);
#endif
