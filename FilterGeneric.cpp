#include "FilterGeneric.h"
using namespace std;

FilterGeneric::FilterGeneric(){

  t = 0;

}

bool FilterGeneric::g(int x){ 
    
  return 0;
    
}

vector<int> FilterGeneric::filter(vector<int> myVector){

  static size_t size = myVector.size();

  // base case
  if (t == size){
    return myVector;
  }
 
  // recursion case
  else{

    // Remove the last element.
    if(g(myVector.back()) == true){
      myVector.pop_back();
      t++;
    }else if(g(myVector.back()) == false){// Store and remove the last element.
      myVector.insert(myVector.begin(),myVector.back());
      myVector.pop_back();
      t++;
    }
  
    // Recursively process the remaining elements.
    return filter(myVector);
  } 

}
