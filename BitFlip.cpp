#include "BitFlip.h"
#include <iostream>
#include <string>
using namespace std;

Individual BitFlip::mutate(Individual binary, int k){ 

  int listLength = binary.getLength();

  // If k is greater than the length of the list, we will count in circles.
  while(k > listLength){

    k = k - listLength;

  }
     binary.flipBit(k);

  return binary;
   
}
