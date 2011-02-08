// cctdfc autocompiled header file
// tdfc version 1.160
// Fri Apr 16 09:58:58 2010

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
   int i3;
   int i4;
   int i5;
   int i6;
   int i7;
   int i8;
   int i9;
   int i10;
   int i11;
   int i12;
   int i13;
   int i14;
   int i15;
   int i16;
   int i17;
   int i18;
   int i19;
   int i20;
   int i21;
   int i22;
   int i23;
   int i24;
   int i25;
} bwt_arg;

class bwt: public ScoreOperator {
public: 
  bwt(UNSIGNED_SCORE_STREAM i0,UNSIGNED_SCORE_STREAM i1,UNSIGNED_SCORE_STREAM i2,UNSIGNED_SCORE_STREAM i3,BOOLEAN_SCORE_STREAM i4,UNSIGNED_SCORE_STREAM i5,SIGNED_SCORE_STREAM i6,SIGNED_SCORE_STREAM i7,BOOLEAN_SCORE_STREAM i8,UNSIGNED_SCORE_STREAM i9,SIGNED_SCORE_STREAM i10,SIGNED_SCORE_STREAM i11,BOOLEAN_SCORE_STREAM i12,UNSIGNED_SCORE_STREAM i13,SIGNED_SCORE_STREAM i14,SIGNED_SCORE_STREAM i15,BOOLEAN_SCORE_STREAM i16,UNSIGNED_SCORE_STREAM i17,BOOLEAN_SCORE_STREAM i18,BOOLEAN_SCORE_STREAM i19,BOOLEAN_SCORE_STREAM i20,UNSIGNED_SCORE_STREAM i21,BOOLEAN_SCORE_STREAM i22,BOOLEAN_SCORE_STREAM i23,BOOLEAN_SCORE_STREAM i24,UNSIGNED_SCORE_STREAM i25);
  void *proc_run();
  void get_graphviz_strings();
private: 
  pthread_t rpt;
  static ScoreOperatorElement *instances;
};
typedef bwt* OPERATOR_bwt;
#define NEW_bwt new bwt
#else
typedef void* OPERATOR_bwt;
void *NEW_bwt(UNSIGNED_SCORE_STREAM i0,UNSIGNED_SCORE_STREAM i1,UNSIGNED_SCORE_STREAM i2,UNSIGNED_SCORE_STREAM i3,BOOLEAN_SCORE_STREAM i4,UNSIGNED_SCORE_STREAM i5,SIGNED_SCORE_STREAM i6,SIGNED_SCORE_STREAM i7,BOOLEAN_SCORE_STREAM i8,UNSIGNED_SCORE_STREAM i9,SIGNED_SCORE_STREAM i10,SIGNED_SCORE_STREAM i11,BOOLEAN_SCORE_STREAM i12,UNSIGNED_SCORE_STREAM i13,SIGNED_SCORE_STREAM i14,SIGNED_SCORE_STREAM i15,BOOLEAN_SCORE_STREAM i16,UNSIGNED_SCORE_STREAM i17,BOOLEAN_SCORE_STREAM i18,BOOLEAN_SCORE_STREAM i19,BOOLEAN_SCORE_STREAM i20,UNSIGNED_SCORE_STREAM i21,BOOLEAN_SCORE_STREAM i22,BOOLEAN_SCORE_STREAM i23,BOOLEAN_SCORE_STREAM i24,UNSIGNED_SCORE_STREAM i25);
#endif