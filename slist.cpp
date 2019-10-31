#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
//alt + x + linum-mode

struct students {
  char sn[81];
  int eyedeer;
  float gpa;
};

int main() {
  char id[50];
  float GPA;
  char name[50];
  char input[50];
  int num = 0;
  vector<students> storage;
  while(true) {
    cout << endl << "List of commands: ADD, PRINT, DELETE, QUIT\n" << endl;
  cin >> input;
  

  //if add is entered, it checks the input for the name, id, and GPA, prints it out and stores it
  if (strcmp(input,"ADD") == 0) {
    students SCPdavid;
    cout << "Enter a name full name, id, and the GPA.";
    cout << endl << "First and last name: ";
    cin >> SCPdavid.sn;
    
    cout << endl << "Student ID: ";
    cin >> SCPdavid.eyedeer;
    for (int i = 0; i < 3; i++) {
      //if it's not a number, it'll notify you and close
      if (!(id[i] >= 48 || id[i] <= 57)) {
      cout << "Enter a number.";
      return false;
      }
    }
    
    cout << endl << "GPA: ";
    cin >> SCPdavid.gpa;
    
    cout << endl << "--------------------------------------------------";
    cout << endl << "Name: " << SCPdavid.sn << endl << "ID: " << SCPdavid.eyedeer << endl << "GPA: " << SCPdavid.gpa << endl;
    
    //once name, id, and GPA is entered, it'll be stored into storage
    storage.push_back(SCPdavid);
  }
  //prints out the data of every list you added
  else if (strcmp(input,"PRINT") == 0) {
    for (int data = 0; data < storage.size(); data++) {
      cout << num + 1 << ") " << storage[data].sn << ", " << storage[data].eyedeer << ", " << storage[data].gpa << endl;
    }
  }
  //deletes a list
  /*/geeksforgeeks.org/list-remove-function-in-c-stl/
  else if (strcmp(input,"DELETE") == 0) {
    cout << "What do you want to delete?\n";
    storage.clear(num);
  }*/
  //quites the program
  else if (strcmp(input,"QUIT") == 0) {
    cout << "quitting\n";
    return false;
    }
  }
}
