#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main(void) {

   Sort* a = new QuickSort();

   vector<int> myVector;
   vector<int> newVector;
   myVector = {5, 2, 3, 1, 4};

   
   newVector = a->sort(myVector);

    for(size_t i = 0; i < newVector.size(); i++){
        cout << newVector.at(i);
    }
}

