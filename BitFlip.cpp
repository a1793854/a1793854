#include "BitFlip.h"
using namespace std;

BitFlip::BitFlip(){ 
    
}

Individual BitFlip::mutate(Individual binary, int k){ 

  int listLength = binary.getLength();

  // If k is greater than the length of the list, we will count in circles.
  while(k > listLength){

    k = k - listLength;

  }

     binary.flipBit(k);

  return binary;
   
}
