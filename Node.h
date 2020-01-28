#ifndef NODE_H
#define NODE_H
#include "Student.h"

using namespace std;

class Node {
 public:
  Node* getNext();
  void setNext(Node* node);
  ~Node();
  Student* getStudent();
  Student* setStudent();
  Node(Student*);

 private:
  Node* node;
  Student* student;
};

#endif
