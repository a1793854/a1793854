#include "BitFlipProb.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 
using namespace std;

BitFlipProb::BitFlipProb(double probability){ 
  p = probability;
}

Individual BitFlipProb::mutate(Individual binary, int k){ 

  // seed
  srand(time(0));

  // length of list
  int listLength = binary.getLength();

  // random probability
  float random;

  for (int i = 1; i < (listLength + 1); i++) {
  
    random = rand() % 100 + 1;

    if ((random/100) <= p){

      binary.flipBit(i);

    }

  }

  return binary;
   
}
