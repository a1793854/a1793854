#include "Crescendo.h"
using namespace std;

Crescendo::Crescendo(){
    name = "Crescendo";
    count = 0;
}

char Crescendo::makeMove() { 

    if(count == 3){
        count = 0;
    }

    // computer moves in the following order: P, S, R.
    if(count == 0){

        move = 'P';

    }else if(count == 1){

        move = 'S';

    }else if(count == 2){

        move = 'R';

    }

    count = count + 1; // increment
    cout << move;
    cout << "\n";

    return move;
    
}
