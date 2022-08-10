#include "PaperDoll.h"
using namespace std;

PaperDoll::PaperDoll(){
    name = "PaperDoll";
    count = 0;
}

char PaperDoll::makeMove() { 

    // computer moves in the following order: P, S, R.
    if(count == 0){

        move = 'P';

    }else if(count == 1){

        move = 'S';

    }else if(count == 2){

        move = 'S';

    }

    cout << move;
    cout << "\n";

    count++; // increment
    return move;
    
}
