#include "Rearrange.h"
using namespace std;

Rearrange::Rearrange(){ 
    
}

Individual Rearrange::mutate(Individual binary, int k){ 

  // index
  int index = k - 1;

  int listLength = binary.getLength();

  // If k is greater than the length of the list, index to count in circles.
  while(index > listLength){

    index = index - listLength;

  }

  string head = binary.getString();
  string tail = binary.getString();

  head.append(tail, 0, index);
  head.erase(0, index);

  Individual newBinary(head);

  return newBinary;
   
}
