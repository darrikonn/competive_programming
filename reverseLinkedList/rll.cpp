#include "rll.h"

LinkedList::LinkedList() {
  _head = new NodePtr();
  _head->next = NULL;
  _head->val = 0;
}

LinkedList::~LinkedList() {
  deleteList(_head);
}

void LinkedList::deleteList(NodePtr* node) {
  if (node->next == NULL) {
    delete node;
  } else {
    deleteList(node->next);
  }
}

NodePtr* LinkedList::insertNode(NodePtr* node, int val) {
  if (node == NULL) {
    NodePtr* newNode = new NodePtr();
    newNode->next = NULL;
    newNode->val = val;
    return newNode;
  }

  node->next = insertNode(node->next, val);
  return node;
}

void LinkedList::insert(int val) {
  _head = insertNode(_head, val);
}

void LinkedList::printList() {
  NodePtr* tmp = _head;
  while (tmp) {
    printf("%d ", tmp->val);
    tmp = tmp->next;
  }
  printf("\n");
}

NodePtr* LinkedList::reverseList(NodePtr* node, NodePtr* prev) {
  if(node->next == NULL) {
    node->next = prev;
    return node;
  } else {
    NodePtr* tmp = reverseList(node->next, node);
    node->next = prev;
    return tmp;
  }
}

void LinkedList::reverse() {
  _head = reverseList(_head, NULL);
}

int main() {
  LinkedList *list = new LinkedList();
  list->insert(1);
  list->insert(2);
  list->insert(3);
  list->insert(4);
  list->insert(5);
  list->printList();

  list->reverse();
  list->printList();

  delete list;

  return 0;
}
