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

  int length = letters.size()-1;

  if (length == 0){ // base case
   
    return letters;

  }else { // recursive case

    return letters[length] + reverseString(letters.substr(0,length));

  }
   
}

