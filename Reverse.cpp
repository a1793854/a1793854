#include "Reverse.h"

#include <cmath>

Reverse::Reverse(){
 
}


int Reverse::reverseDigit(int value){

  int size = log10(value);
  int base =  pow(10, size);


  if (value <= 9) { // base case

        return value;

    }else { // recursive case

    return  (value % 10)*base + reverseDigit(value/10);

}

}

string Reverse::reverseString(string letters){

  if (letters.size() == 1){ // base case
   
    return letters;

  }else { // recursive case

    return letters[letters.size() - 1] + reverseString(letters.substr(0, letters.size() - 1));

  }
   
}

