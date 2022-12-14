#include "EfficientTruckloads.h"
using namespace std;
#define ROW 10000
#define COLUMN 10000

#include <iostream>
#include <vector>
#include <cstring>

EfficientTruckloads::EfficientTruckloads(){

}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
  
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

// invalid cases
if ( numCrates == 0 ){ 
    
    return 0;

}else if ( (numCrates > 10000) || (loadSize > 10000) || (numCrates < 0) || (loadSize <= 0)) { // invalid input

    return -1;

} 

 if (numCrates <= loadSize) { // base case

    table[numCrates-1][loadSize-1] = 1;

  }

  if (table[numCrates-1][loadSize-1] != -1) { // check if value already there

    return table[numCrates-1][loadSize-1];

  }else if (numCrates % 2 != 0) { // recursive cases

    numCrates = numCrates -1;

    table[numCrates-1][loadSize-1] = numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + 1, loadSize);

  }else {

    table[numCrates-1][loadSize-1] = numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize);

  } 

return table[numCrates-1][loadSize-1];

 
}


/*   

// VECTOR

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
  
  // ARRAY

  // inititalize table 
  static int table[ROW][COLUMN];

  // fill table with -1;
  memset(table, -1, sizeof(table));

*/










