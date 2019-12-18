#ifndef NODE_H
#define NODE_H
#include "Node.h"
#include "Student.h"

class Node {
 public:
  Node* node;
  Student* student;
  
  Node* getNext();
  Student* getStudent();
  Node();
};

#endif
