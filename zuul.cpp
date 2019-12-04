#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
//alt + x + linum-mode

int main() {
  char* input = new char[30];
  int player;
  vector<roomSky> sky;
  char NO, SO, WE, EA;

  cout << "You are a wasp, you're goal is to sting people and bully insects because you're a wasp.";
  while(true) {
  cout << "Commands: NORTH, SOUTH, WEST, EAST, Sting, Bite, Quit";

  if (strcmp(input,"NORTH")) {
      cout << "You flew north.";
      cout << endl;
    }
  else if (strcmp(input,"SOUTH")) {
	cout << "You flew south.";
	cout << endl;
      }
  else if (strcmp(input,"WEST")) {
	cout << "You flew west.";
	cout << endl;
      }
  else if (strcmp(input,"EAST")) {
    cout << "You flew EAST.";
    cout << endl;
  }
    else if (strcmp(input,"Sting")) {
      cout << "Nothing to sting.";
      cout << endl;
    }
    else if (strcmp(input,"Bite")) {
      cout << "Nothing to bite.";
      cout << endl;
    }
    else if (strcmp(input,"Quit")) {
      cout << "Quiting...";
      return false;
    }
  }
}
