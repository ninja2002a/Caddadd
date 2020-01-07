#ifndef NODE_H
#define NODE_H
#include "Student.h"

using namespace std;

class Node {
 public:
  Node* node;
  Student* student;
  
  Node* getNext();
  void setNext(Node* node);
  ~Node();
  Student* getStudent();
  Node(Student*);
};

#endif
