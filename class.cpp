#include <iostream>
#include <cstring>
#include <vector>
#include "VG.cpp"
#include "music.cpp"
#include "movie.cpp"

using namespace std;
//alt + x + linum-mode
//VG.cpp, music.cpp, movie.cpp

int main() {
  apple music;
  mom movie;
  char* input = new char[10];
  rad VG;
  VG.title = new char[100];
  VG.publisher = new char[100];
  VG.year = new char[15];
  VG.rate = new char[5];

  cout << "Commands: ADD, SEARCH, DELETE, QUIT" << endl;
  while(true) {
  cin >> input;

  //asks what you want to add
  if (strcmp(input,"ADD") == 0) {
    cout << "What do you want to add? VIDEOGAME, MUSIC, MOVIE" << endl;
    cin >> input;
    cin.ignore();
    
    if (strcmp(input,"VIDEOGAME") == 0) {
      cout << "Enter a title: ";
      cin >> VG.title;
      
      cout << "Enter a year: ";
      cin >> VG.year;
      
      cout << "Enter the publisher: ";
      cin >> VG.publisher;
      
      cout << "Enter the rating: ";
      cin >> VG.rate;
      
      cout << VG.title << endl << VG.year << endl << VG.publisher << endl << VG.rate << "/10";
    }
    
    else if (strcmp(input,"MUSIC") == 0) {
      cout << "Enter a title, artist, year, duration, and publisher: ";
      cin >> input;
    cout << music.music;
    }
    
  else if (strcmp(input,"MOVIE") == 0) {
    cout << "Enter a title, director, year, duration, and rating: ";
    cin >> input;
    cout << movie.movie;
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
