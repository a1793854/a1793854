#include "MapGeneric.h"
using namespace std;

MapGeneric::MapGeneric(){

  t = 0;

}

int MapGeneric::f(int x){ 
    
  return 0;
    
}

vector<int> MapGeneric::map(vector<int> myVector){

  // base case
  if (t == myVector.size()){
    return myVector;
  }
 
  // recursion case
  else{
    // Store and remove the last element.
    myVector.insert(myVector.begin(),f(myVector.back()));
    myVector.pop_back();
    t++;
    // Recursively process the remaining elements.
    return map(myVector);
  } 


}
