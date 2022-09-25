#include "Individual.h"
using namespace std;

Individual::Individual(int length) {

    // Creates the binary string. Each binary value in the list has value 0
    binaryString.resize(length);
    for (int i = 0; i < length; i++) {

        binaryString.at(i) = '0';

    }

}

Individual::Individual(string dnaString){

    //  Creates a new Individual with an identical list
    binaryString = dnaString;

}

string Individual::getString(){

    return binaryString;

}

int Individual::getBit(int pos){

    int index = pos - 1;

    int binaryLength = binaryString.length();

    // out of bounds check
    if(index > binaryLength){

        return -1;

    }

    // return bit at input pos
    return binaryString.at(index) - '0';
    
}

void Individual::flipBit(int pos){

    int index = pos - 1;

    // flip bit to opposite
    if(binaryString.at(index) == '1'){

        binaryString.replace(index, 1,"0");  

    }else { 

        binaryString.replace(index, 1, "1");  

    }
}

int Individual::getLength(){

    int len = binaryString.length();

    return len;

}