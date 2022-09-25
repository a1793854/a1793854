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

Mutator* bit_flip = new BitFlip();
Mutator* rearrange = new Rearrange();

Individual* temp1 = new Individual(0);
Individual* temp2 = new Individual(0);

temp1 = execute(str1, bit_flip, k1);
temp2 = execute(str2, rearrange, k2);


int len = temp2->getLength();
int count = 0;
int streak = 0;
for(int i = 1; i < (len + 1) ; i++){

    if(temp2->getBit(i) == 1){

        count++;

    }else {

        count = 0;
        
    }

    if(count > streak){

        streak = count;

    }

}

cout << temp1->getString() << " " << temp2->getString() << " ";
cout << streak;

}

