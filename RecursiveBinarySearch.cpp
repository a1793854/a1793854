#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){ 
 
}

bool RecursiveBinarySearch::searchHelper(vector<int> list, int target, int low, int high){ 

    // middle of list
    auto mid = low + (high - low)/2;

    // base case
    if (low > high){

        return false;

    } 
    else if (target == list.at(mid)){

        return true;

    }

    // recursive case
    if ( target < list.at(mid)){
        return searchHelper(list, target, low, mid - 1);

    }else {

        return searchHelper(list, target, mid + 1, high);

    }

}

bool RecursiveBinarySearch::search(vector<int> list, int target){ 

    int size = list.size();

    return searchHelper(list, target, 0, size - 1);

}

