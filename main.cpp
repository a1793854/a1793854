#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <sstream>
#include <vector>
using namespace std;

int main(void) {

    Sort* a = new QuickSort();
    RecursiveBinarySearch* b = new RecursiveBinarySearch();
    bool x;

    // take inputs
    string line;
    int number;
    vector<int> numbers;

    getline(cin, line);
    istringstream stream(line);
    while (stream >> number)
        numbers.push_back(number);
    
    // sort
    vector<int> newVector;
    newVector = a->sort(numbers);
    x = b->search(newVector, 1);

    if(x == true){
         cout << "true" << " ";
    }else if(x == false){
         cout << "false" << " ";
    }

    for(size_t i = 0; i < newVector.size(); i++){
        cout << newVector.at(i) << " ";
    }
}

