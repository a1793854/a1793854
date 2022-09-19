#include "ReduceGeneric.h"
using namespace std;

int ReduceGeneric::reduce(vector<int> myVector){

  // base case
  if (myVector.size() == 1){
    return myVector.back();
  }
 
  // recursion case
  else{

    myVector.insert(myVector.begin(),binaryOperator(myVector.at(myVector.size()-1), myVector.at(myVector.size()-2)));
    myVector.pop_back();
    myVector.pop_back();

    // recursively process the remaining elements.
    return reduce(myVector);

  } 

}
