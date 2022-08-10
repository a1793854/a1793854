#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Player.h"
#include <iostream>

class Bureaucrat : public Player {

 public:
    Bureaucrat();
    char makeMove();

};

#endif // BUREAUCRAT_H
