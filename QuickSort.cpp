#include "QuickSort.h"
#include "Sort.h"
#include <vector>
#include <algorithm>
using namespace std;

QuickSort::QuickSort(){ 
    
}

// makes last element as pivot, places all elements smaller than pivot and all greater to the right
int QuickSort::partition(int low, int high){

    int pivot;

    // if the size of the current array is >= 3 make third element the pivot
    if(high - low >= 3){
        swap(sortedVector[low + 3], sortedVector[high]); // make third element pivot
        pivot = sortedVector.at(high);
    }
    else{
        pivot = sortedVector.at(high);
    }

    int increment = (low - 1);

    for (int i = low; i <= high; i++){
        
        // check if element is smaller than pivot
        if (sortedVector.at(i) < pivot){
            increment++; // increment through smaller element
            swap(sortedVector.at(increment), sortedVector.at(i));
        }

    }

    swap(sortedVector.at(increment + 1), sortedVector.at(high));
    return (increment + 1);



}

// helper function
void QuickSort::sortHelper(int low, int high){

    // base case
    if(low < high){
        int partitionIndex = partition(low, high);
        sortHelper(low, partitionIndex - 1);
        sortHelper(partitionIndex + 1, high);
    }

}

vector<int> QuickSort::sort(vector<int> list){ 
    
    sortedVector  = list;

    int size = sortedVector.size();
    sortHelper(0, size - 1);

    return sortedVector;

}

