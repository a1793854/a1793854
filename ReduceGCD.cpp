#include "ReduceGCD.h"
using namespace std;

ReduceGCD::ReduceGCD(){ 
    
}

int ReduceGCD::binaryOperator(int x, int y){ 

    int result = min(x, y); // find minimum
    while (result > 0) {
        if ((x % result == 0) && (y % result == 0)) {
            break;
        }
        result--;
    }

    return result; // return gcd
  
}
