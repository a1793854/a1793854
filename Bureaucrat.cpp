#include "Bureaucrat.h"
using namespace std;

Bureaucrat::Bureaucrat() {
    name = "Bureaucrat";
}

char Bureaucrat::makeMove() { 
    
    // computer only throws paper
    move = 'P';

    cout << move;
    cout << "\n";
    
    return move;
    
}
