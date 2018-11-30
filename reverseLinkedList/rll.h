#ifndef RLL_H_
#define RLL_H_

#include <stdio.h>

typedef struct node {
  struct node* next;
  int val;
} NodePtr;

class LinkedList {
  private:
    NodePtr* _head;
    NodePtr* insertNode(NodePtr*, int val);
    NodePtr* reverseList(NodePtr*, NodePtr*);
    void deleteList(NodePtr*); 

  public:
    LinkedList();
    ~LinkedList();
    void printList();
    void insert(int val);
    void reverse();
};

#endif //RLL_H_
