#include <iostream>
#include "Student.h"

Student::Student() {
  
}

void Student::setFName(char* ff) {
  first = ff;
}

char* Student::getFName() {
  return first;
}

char* Student::getLName() {
  return last;
}

void Student::setLName(char* ll) {
  last = ll;
}

char* Student::getID() {
  return ed;
}

void Student::setID(char* id) {
  ed = id;
}

float Student::getGPA() {
  return gpa;
}

void Student::setGPA(float gap) {
  gpa = gap;
}
