#include <iostream>
#include <cstring>
#include <vector>

using namespace std
//alt + x + linum-mode

struct magic {

};

int main() {
  char videogame;
  char music;
  char movie;
  char input;
  char link;

  while(true) {
  cin >> input;

  if (strcmp(input,"ADD") == 0) {
    cout << endl << "Enter id.";
    
  }
  else if (strcmp(input,"SEARCH") == 0) {
    cout << endl << "What would you like to search?";
    cin >> link;
  }
  else if (strcmp(input,"DELETE") == 0) {
    cout << endl << "What do you want to delete?";
    cin >> 
    }
  }
}
