#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <iostream>
#include <string>

class Individual {

  private:
    std::string binaryString;

  public:
    Individual(int length);
    Individual(std::string dnaString);
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getLength();

};

#endif // INDIVIDUAL_H
