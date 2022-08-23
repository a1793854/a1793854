#include "EfficientTruckloads.h"
using namespace std;
//#define ROW 10000
//#define COLUMN 10000

#include <iostream>
#include <vector>

EfficientTruckloads::EfficientTruckloads(){

}

int EfficientTruckloads::EfficientnumTrucks(int numCrates, int loadSize){
  /*
  // inititalize table of vetcors with row and columns
  static vector<vector<int>> table(ROW);
  for (int i = 0 ; i < ROW; i++) {

    table[i].resize(COLUMN);
        
  }

  // fill vectors with -1;
 for(int i=0; i<ROW; i++){
    for(int j=0; j<COLUMN; j++){    

      table[i][j]= -1;

    }
  }


  if (table[numCrates-1][loadSize-1] != -1) { // check if value already there

    return table[numCrates-1][loadSize-1];

  }else if (numCrates <= loadSize) { // base case

    table[numCrates-1][loadSize-1] = 1;

  }else if (numCrates % 2 != 0) { // recursive cases

    numCrates = numCrates -1;

    table[numCrates-1][loadSize-1] = EfficientnumTrucks(numCrates/2, loadSize) + EfficientnumTrucks(numCrates/2 + 1, loadSize);

  }else {

    table[numCrates-1][loadSize-1] = EfficientnumTrucks(numCrates/2, loadSize) + EfficientnumTrucks(numCrates/2, loadSize);

  } 

return table[numCrates-1][loadSize-1];
 */

 return 0;
}



















