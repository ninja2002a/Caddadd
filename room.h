#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <cstring>
#include <map>
#include <string.h>

using namespace std;

class room {
 private:
  map<char*,room*>* exit;
  char* name;
  char* desc;
  char* player;
  
 public:
  room();
  map <char*,room*>* exito();
  char* disco(char* player);
  char* namo(char* player);
  char* getdisco();
  char* getnamo();

  
};

#endif
