#include "FilterGeneric.h"
using namespace std;

vector<int> FilterGeneric::filter(vector<int> myVector){

  // base case
  if (myVector.size( )== 0){

    return myVector;

  }
 
  // recursion case
  else{
    vector<int> newVector; 
    vector<int> restOfVector;

    // remove first value if true
    if(g(myVector.front()) == true){

      /// reduce given list size
      myVector.erase(myVector.begin());
      restOfVector = filter(myVector);
      
      // recursively process the remaining elements and append the modified values
      restOfVector = filter(myVector);
      newVector.insert(end(newVector), begin(restOfVector), end(restOfVector));

    }else if(g(myVector.front()) == false){

      // store modified value & reduce given list size
      newVector = {myVector.front()};
      myVector.erase(myVector.begin());

      // recursively process the remaining elements and append the modified values
      restOfVector = filter(myVector);
      newVector.insert(end(newVector), begin(restOfVector), end(restOfVector));
    }
  
    return newVector;
  } 

}
