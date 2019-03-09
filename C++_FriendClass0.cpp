#include <iostream>

class Node
{
private:
  int key;
  Node *next;
  /* Other members of node class */

  friend class LinkedList; // Now class LinkedList can
                           // access priate members of Node

  friend int LinkedList::search(); // search() of LinkedList
                                   // can access internal members
};
