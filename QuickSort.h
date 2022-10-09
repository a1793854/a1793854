#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>

class QuickSort: public Sort{

  private:
  std::vector<int> sortedVector;

  public:
  QuickSort();
  int partition(int low, int high);
  void sortHelper(int low, int high);
  std::vector<int> sort(std::vector<int> list);

};

#endif // QUICKSORT_H
