#include <iostream>
#include <cstring>
#include <vector>
#include "VG.cpp"
#include "music.cpp"
#include "movie.cpp"

using namespace std;
//alt + x + linum-mode
//VG.cpp, music.cpp, movie.cpp

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
  char* music = new char[500];
  char* movie = new char[500];
  char* input = new char[10];
  rad VG;

  cout << "Commands: ADD, SEARCH, DELETE" << endl;
  while(true) {
  cin >> input;

  //asks what you want to add
  if (strcmp(input,"ADD") == 0) {
    cout << "What do you want to add? VIDEOGAME, MUSIC, MOVIE" << endl;
    cin >> input;
    if (strcmp(input,"VIDEOGAME") == 0) {
      cout << "Enter a title, year, publisher, and rating: ";
      cout << VG.videogame;
    }
    else if (strcmp(input,"MUSIC") == 0) {
      cout << "Enter a title, artist, year, duration, and publisher: ";
    cin >> music;
    }
  else if (strcmp(input,"MOVIE") == 0) {
    cout << "Enter a title, director, year, duration, and rating: ";
    cin >> movie;
    }
  }
  //will find that data you input
  else if (strcmp(input,"SEARCH") == 0) {
    cout << "What would you like to search?" << endl;
    cin >> input;
  }
  //deletes the data
  else if (strcmp(input,"DELETE") == 0) {
    cout << "What do you want to delete?" << endl; 
      }
  //quits the program
  else if (strcmp(input,"QUIT") == 0) {
    return false;
    }
  }
  return false;
}
