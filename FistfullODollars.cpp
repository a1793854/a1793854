#include "FistfullODollars.h"
using namespace std;

FistfullODollars::FistfullODollars(){

    name = "FistfullODollars";
    count = 0;
    
}

char FistfullODollars::makeMove() { 
    
    // computer moves in the following order: P, S, R.
    if(count == 0){

        move = 'R';

    }else if(count == 1){

        move = 'P';

    }else if(count == 2){

        move = 'P';

    }

    cout << move;
    cout << "\n";

    count++; // increment
    return move;
    
}
