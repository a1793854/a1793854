#include "ReduceMinimum.h"
using namespace std;

ReduceMinimum::ReduceMinimum(){ 
    
}

int ReduceMinimum::binaryOperator(int x, int y){ 

  if(x < y){
    return x;
  }
  else {
    return y;
  }
  
}
