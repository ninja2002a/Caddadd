#include <iostream>
#include <cstring>
#include <vector>
#include "room.h"
#include "zuul.cpp"

using namespace std;

void room::setExit(map<char*, room*>* player) {
  exit = player;
  int NO, SO, WE, EA;
}

char* room::getnamo() {
  return name;
}

char* room::getdisco() {
  return desc;
}

char* room::namo(char* name) {
  name = player;
}

char* room::disco(char* desc) {
  desc = player;
}

room::room() {
  
}


