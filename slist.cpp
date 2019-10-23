#include <iostream>
#include <cstring>

using namespace std;
//alt + x + linum-mode

int main() {
  char* id = new char[50];
  float GPA;
  char* name = new char[50];
  char* input = new char[50];
  while(true) {
  cout << "List of commands: ADD, PRINT, DELETE, QUIT\n" << endl;
  cin >> input;

  //if add is entered, it checks the input for the name, id, and GPA, prints it out and stores it
  if (strcmp(input,"ADD") == 0) {
    cout << "Enter a name full name, id, and the GPA.";
    cout << endl << "First and last name: ";
    cin >> name;
    cout << endl << "Student ID: ";
    cin >> id;
    for (int i = 0; i < 6; i++) {
      //if it's not a number, it'll notify you and close
      if (!(id[i] >= 48 || id[i] <= 57)) {
      cout << "Enter a number.";
      return false;
    }
  }
    cout << endl << "GPA: ";
    cin >> GPA;
    cout << endl << "--------------------------------------------------";
    cout << endl << "Name: " << name << endl << "ID: " << id << endl << "GPA: " << GPA << endl;
  }
  //prints out the data of every list you added
  else if (strcmp(input,"PRINT") == 0) {
    for (int data = 0; data < 3; data++) {
    cout << name << ", " << id << ", " << GPA;
    }
  }
  //deletes a list
  else if (strcmp(input,"DELETE") == 0) {
    cout << "deleting\n";
  }
  //quites the program
  else if (strcmp(input,"QUIT") == 0) {
    cout << "quitting\n";
    return false;
    }
  }
}
