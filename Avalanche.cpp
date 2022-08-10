#include "Avalanche.h"
using namespace std;

Avalanche::Avalanche() {
    name = "Avalanche";
}

char Avalanche::makeMove() { 
    
    // computer only throws rock
    move = 'R';

    cout << move;
    cout << "\n";
    
    return move;
    
}
