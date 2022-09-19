#include "MapGeneric.h"
using namespace std;

vector<int> MapGeneric::map(vector<int> myVector){

  // base case
  if (myVector.size() == 0){

    return myVector;

  }
 
  // recursion case
  else{

    // store modified value & reduce given list size
    vector<int> newVector = {f(myVector.front())}; 
    myVector.erase(myVector.begin()); 

    // recursively process the remaining elements and append the modified values
    vector<int> restOfVector = map(myVector);
    newVector.insert(end(newVector), begin(restOfVector), end(restOfVector)); 

    return newVector;
  } 

}
