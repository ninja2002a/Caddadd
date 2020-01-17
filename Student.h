#ifndef STUDENT_H
#define STUDENT_H

class Student {
 public:
  Student();
  char* getFName();
  void setFName(char*);
  char* getLName();
  void setLName(char*);
  char* getID();
  void setID(char*);
  float getGPA();
  void setGPA(float);

 private:
  char* first;
  char* last;
  char* ed;
  float gpa;
  
};

#endif
