#include "Toolbox.h"
using namespace std;

Toolbox::Toolbox() {

    name = "Toolbox";
    
}

char Toolbox::makeMove() { 
    
    // computer only throws scissors
    move = 'S';

    cout << move;
    cout << "\n";
    
    return move;
    
}
