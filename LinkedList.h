#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList{

  private:
  Node *head;
  
  public:
  LinkedList();
  void addFront(int newItem);
  void addEnd(int newItem);
  void deleteFront();
  void deleteEnd();
  void printItems();
  void deletePosition(int position);

};

#endif // LINKEDLIST_H
