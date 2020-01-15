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

void Node::setNext(Node* node) {
  this -> node = node;
}

Node::Node(Student* stud) {
  student = stud;
}

Node::~Node() {

}
