#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads(){

}


int Truckloads::numTrucks(int numCrates, int loadSize){

if ( numCrates == 0 ){
    
    return 0;

}else if ( (numCrates > 10000) || (loadSize > 10000) || (numCrates < 0) || (loadSize <= 0)) { // invalid input

    return -1;

} 

if(numCrates <= loadSize){ // base case

    return 1;

}else if (numCrates % 2 != 0) { // recursive cases

    numCrates = numCrates -1;

    return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + 1, loadSize);

}else {

     return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize);

}

}



















