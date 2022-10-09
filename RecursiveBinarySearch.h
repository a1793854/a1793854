#ifndef RECURSIVEBINARYSEARCH
#define RECURSIVEBINARYSEARCH
#include <vector>

class RecursiveBinarySearch{

  public:
  RecursiveBinarySearch();
  bool searchHelper(std::vector<int> list, int target, int low, int high);
  bool search(std::vector<int> list, int target);

};

#endif // RECURSIVEBINARYSEARCH
