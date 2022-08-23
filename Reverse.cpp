#include "Reverse.h"

#include <cmath>

Reverse::Reverse(){
 
}


int Reverse::reverseDigit(int value){

  int val = abs(value);

  int size = log10(val);
  int base =  pow(10, size);

  if (val<= 9) { // base case

        return val;

    }else { // recursive case

    return  (val % 10)*base + reverseDigit(val/10);

}

}

string Reverse::reverseString(string letters){

  
  if (letters.size() == 1){ // base case
   
    return letters;

  }else { // recursive case

    return letters[letters.size() - 1] + reverseString(letters.substr(0, letters.size() - 1));

  }
   
}

