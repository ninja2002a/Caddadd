#include <iostream>
#include <cstring>

using namespace std;
//alt + x + linum-mode

int main() {
  //int input;
  int id;
  float GPA;
  char* name = new char[50];
  char* input = new char[50];

  cout << "List of commands: ADD, PRINT, DELETE, QUIT\n" << endl;
  cin >> input;

  if (strcmp(input,"ADD") == 0) {
    cout << "Enter a name full name, id, and the GPA.";
    cout << endl << "First and last name: ";
    cin >> name;
    cout << endl << "Student ID: ";
    cin >> id;
    if (id >= 58 && id <= 47) {
      cout << "Enter a number.";
    }
    cout << endl << "GPA: \n";
    cin >> GPA;
    cout << "--------------------------------------------------";
    cout << endl << "Name: " << name << endl << "ID: " << id << endl << "GPA: " << GPA << endl;
    return true;
  }
  else if (strcmp(input,"PRINT") == 0) {
    cout << name << ", " << id << ", " << GPA;
    return true;
  }
  else if (strcmp(input,"DELETE") == 0) {
    cout << "deleting\n";
    return true;
  }
  else if (strcmp(input,"QUIT") == 0) {
    cout << "quitting\n";
    return false;
  }
}
