#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric(){

}

int ReduceGeneric::binaryOperator(int x, int y){ 
    
  return 0;
    
}

int ReduceGeneric::reduce(vector<int> myVector){

  // base case
  if (myVector.size() == 1){
    return myVector.back();
  }
 
  // recursion case
  else{

    if (binaryOperator(myVector.back(), myVector.front()) == myVector.front()){
      myVector.pop_back();
    }else if(binaryOperator(myVector.back(), myVector.front()) == myVector.back()){
      myVector.erase(myVector.begin());
    }

    // recursively process the remaining elements.
    return reduce(myVector);

  } 

}
