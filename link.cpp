#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;
//alt + x + linum-mode

int main() {
  char id[7];
  char GPA;
  char first[50];
  char last[50];
  char input[50];
  int num = 0;
  Student* s = new Student();
  
  cout << endl << "List of commands: ADD, PRINT, DELETE, QUIT" << endl;
  cin >> input;

  if (strcmp(input,"ADD") == 0) {
    cout << endl << "Enter first name: ";
    cin >> first;

    cout << endl << "Enter last name: ";
    cin >> last;

    cout << endl << "ID: ";
    cin >> id;
    for (int i = 0; i < 3; i++) {
      if (!(id[i] >= 48 || id[i] <= 57)) {
	cout << endl << "Enter a number.";
      }
    }
    cout << endl << "GPA: ";
    cin >> GPA;

    cout << endl << "First name: " << first << endl << "Last name: " << last << endl  << "ID: " << id << endl << "GPA: " << GPA;

    Node* n = new Node(new Student());
    
  }
  else if (strcmp(input,"PRINT") == 0) {

  }
  else if (strcmp(input,"DELETE") == 0) {
    
  }
  else if (strcmp(input,"QUIT") == 0) {
      return 1;
    }
}
