#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

Node* Node::getNext() {
  return node;
}

Student* Node::getStudent() {
  return student;
}

void setNext(Node* node) {

}

Node::Node(Student* stud) {
  
}

Node::~Node() {

}
