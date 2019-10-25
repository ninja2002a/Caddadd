#include <iostream>
#include <cstring>

using namespace std;
//alt + x + linum-mode

struct students {
  char sn[81];
  int id;
  float gpa;
};

int main() {
  char id[50];
  float GPA;
  char name[50];
  char input[50];
  char storage[50];
  while(true) {
    cout << endl << "List of commands: ADD, PRINT, DELETE, QUIT\n" << endl;
  cin >> input;
  

  //if add is entered, it checks the input for the name, id, and GPA, prints it out and stores it
  if (strcmp(input,"ADD") == 0) {
    cout << "Enter a name full name, id, and the GPA.";
    cout << endl << "First and last name: ";
    cin >> name;
    strcpy(storage,name);
    cout << endl << "Student ID: ";
    cin >> id;
    strcpy(storage,id);
    for (int i = 0; i < 3; i++) {
      //if it's not a number, it'll notify you and close
      if (!(id[i] >= 48 || id[i] <= 57)) {
      cout << "Enter a number.";
      return false;
      }
    }
    cout << endl << "GPA: ";
    cin >> GPA;
    //strcpy(storage,GPA);
    cout << endl << "--------------------------------------------------";
    cout << endl << "Name: " << name << endl << "ID: " << id << endl << "GPA: " << GPA << endl;
    //once name, id, and GPA is entered, it'll be stored into storage
    for (int j = 0; j < 1000; j++) {
      if (name[j] && id[j] && GPA == true) {
	storage == name, id, GPA;
      }
    }
  }
  //prints out the data of every list you added
  else if (strcmp(input,"PRINT") == 0) {
    for (int data = 0; data < 3; data++) {
    cout << name << ", " << id << ", " << GPA;
    cout << endl << storage;
    }
  }
  //deletes a list
  else if (strcmp(input,"DELETE") == 0) {
    cout << "What do you want to delete?\n";
  }
  //quites the program
  else if (strcmp(input,"QUIT") == 0) {
    cout << "quitting\n";
    return false;
    }
  }
}
