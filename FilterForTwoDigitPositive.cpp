#include "FilterForTwoDigitPositive.h"
using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){ 
    
}

bool FilterForTwoDigitPositive::g(int x){ 

  int y = x;
  int counting = 0;
  
  while(y != 0) {
    y = y / 10;
    counting++;
  }

  if ((counting != 2) || (x < 0 )){
    return true;
  }else {
    return false;
  }
   
}
