#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){

    Individual* newPtr = new Individual(0);

    *newPtr =  mPtr->mutate(*indPtr, k);

    return newPtr;

}

int main(void) {

string binarystr1;
int k1;
string binarystr2;
int k2;

cin >> binarystr1 >> k1 >> binarystr2 >> k2;

Individual* str1 = new Individual(binarystr1);
Individual* str2 = new Individual(binarystr2);

//Mutator* bit_flip = new BitFlip();
Mutator* rearrange = new Rearrange();
Mutator* bit_flip_prob = new BitFlipProb(0.5);

Individual* temp1 = new Individual(0);
Individual* temp2 = new Individual(0);

temp1 = execute(str1, bit_flip_prob, k1);
temp2 = execute(str2, rearrange, k2);

cout << temp1->getString() << " " << temp2->getString() << " ";
cout << temp2->getMaxOnes();

}

