#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;
//alt + x + linum-mode

int main() {
  char id[7];
  float GPA;
  char first[50];
  char last[50];
  char input[50];
  int num = 0;
  
  cout << endl << "List of commands: ADD, PRINT, DELETE, QUIT" << endl;
  cin >> input;

  if (strcmp(input,"ADD") == 0) {
    cout << endl << "Enter first name";
    cin.getline(first);
    for (int i = 0; i < 3; i++) {
      if (!(id[i] >= 48 || id[i] <= 57)) {
	cout << "ID: ";
      }
    }
  }
  else if (strcmp(input,"PRINT") == 0) {

  }
  else if (strcmp(input,"DELETE") == 0) {
    
  }
  else if (strcmp(input,"QUIT") == 0) {
      return 1;
    }
}
