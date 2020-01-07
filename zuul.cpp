#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include <map>
#include "room.h"

using namespace std;
//alt + x + linum-mode
//got help from nick fong

/*
Reminders:
Connect the maps
Make movement function
Create items
Intereactions
 */

//Creates the map with a name and a description to tell what it is
void create(vector<room*>*r) {
  char* name = new char[50];
  char* desc = new char[1000];

    room* roomSky = new room();
    strcpy(name, "sky");
    strcpy(desc, "you flew to the sky");
    roomSky->namo(name);
    roomSky->disco(desc);
    r->push_back(roomSky);

    room* roomHouse = new room();
  }

//Directions and commands
int main() {
  char* NO = new char[5];
  strcpy(NO, "north");
  char* SO = new char[5];
  strcpy(SO, "south");
  char* WE = new char[5];
  strcpy(WE, "west");
  char* EA = new char[5];
  strcpy(EA, "east");
  
  map<char*,room*>* exits = new map<char*,room*>();
  vector<room*> roomV;
  room* ram;
  ram = new room();

  //exits->insert(pair<char*,room>(NO,room*));

  /*
  vector<roomPG*> playground;
  vector<roomForest*> forest;
  vector<roomTown*> town;
  vector<roomCity*> city;
  vector<roomBoat*> boat;
  vector<roomFarm*> farm;
  vector<roomSchool*> school;
  vector<roomOrchard*> orchard;
  vector<roomMeadow*> meadow;
  vector<roomAttic*> attic;
  vector<roomGround*> ground;
  vector<roomNest*> nest;
  vector<roomTree*> tree;
   */
  char* input = new char[30];
  char* item = new char[30];
  int player;

  cout << "You are a wasp, your goal is to sting people and bully insects because you're a wasp." << endl;
  while(true) {
    cout << "Commands: North, South, West, East, Sting, Bite, Quit" << endl;
  cin >> input;

  if (strcmp(input,"North") == 0) {
    cout << "You flew north.";
      cout << endl;
    }
  else if (strcmp(input,"South") == 0) {
	cout << "You flew south.";
	cout << endl;
      }
  else if (strcmp(input,"West") == 0) {
	cout << "You flew west.";
	cout << endl;
      }
  else if (strcmp(input,"East") == 0) {
    cout << "You flew east.";
    cout << endl;
  }
    else if (strcmp(input,"Sting") == 0) {
      cout << "Nothing to sting.";
      cout << endl;
    }
    else if (strcmp(input,"Bite") == 0) {
      cout << "Nothing to bite.";
      cout << endl;
    }
    else if (strcmp(input,"Quit") == 0) {
      cout << "Quiting...";
      return false;
    }
  }
}
