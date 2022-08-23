#include "TruckLoads.h"
#include <iostream>


TruckLoads::TruckLoads(){

}


int TruckLoads::numTrucks(int numCrates, int loadSize){

if(numCrates <= loadSize){ // base case

    return 1;

}else if (numCrates % 2 != 0) { // recursive cases

    numCrates = numCrates -1;

    return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + 1, loadSize);

}else {

     return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize);

}

}



















