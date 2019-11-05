#include <iostream>
#include <cstring>
#include <vector>

using namespace std;
//alt + x + linum-mode

struct magic {
  char title;
  int date;
  char artist;
  char publisher;
  int rate;
  int duration;
  char director;
};

int main() {
  char* videogame = new char[500];
  char* music = new char[500];
  char* movie = new char[500];
  char* input = new char[25];

  cout << "Commands: ADD, SEARCH, DELETE" << endl;
  while(true) {
  cin >> input;

  if (strcmp(input,"ADD") == 0) {
    cout << "What do you want to add? VIDEOGAME, MUSIC, MOVIE" << endl;
    cin >> input;
    if (strcmp(input,"VIDEOGAME") == 0) {
      cout << "Enter a game: ";
      cin >> videogame;
    }
    else if (strcmp(input,"MUSIC") == 0) {
      cout << "Enter a song: ";
    cin >> music;
    }
  else if (strcmp(input,"MOVIE") == 0) {
    cout << "Enter a movie: ";
    cin >> movie;
  }
  }
  else if (strcmp(input,"SEARCH") == 0) {
    cout << "What would you like to search?" << endl;
    cin >> link;
  }
  else if (strcmp(input,"DELETE") == 0) {
    cout << "What do you want to delete?" << endl; 
      }
  else if (strcmp(input,"QUIT") == 0) {
    return false;
    }
  }
  return false;
}
