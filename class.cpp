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

      //displays what you add then sends it to VG.cpp as storage
      cout << "Title: " << VG.title << endl << "Year: " << VG.year << endl << "Publisher: " << VG.publisher << endl << "Rating: " << VG.rate << "/10";
      
    }

    //sends input to music.cpp as storage
    else if (strcmp(input,"MUSIC") == 0) {
      cout << "Enter the title: ";
      cin >> music.title;

      cout << "Enter the artist: ";
      cin >> music.artist;

      cout << "Enter the year: ";
      cin >> music.year;

      cout << "Enter the length of the song: ";
      cin >> music.duration;

      cout << "Enter the rating of the song: ";
      cin >> music.rating;
    }

    //sends input to movie.cpp as storage
  else if (strcmp(input,"MOVIE") == 0) {
    cout << "Enter a title, director, year, duration, and rating: ";
    cin >> movie.title;

    cout << "Enter the director: ";
    cin >> movie.director;

    cout << "Enter the year: ";
    cin >> movie.year;

    cout << "Enter the length of the movie: ";
    cin >> movie.length;

    cout << "Enter the rating of the movie: ";
    cin >> movie.rate;
    }
  }
  
  //will find that data you input
  else if (strcmp(input,"SEARCH") == 0) {
    cout << "What would you like to search?" << endl;
    cin >> input;
  }
  
  //deletes a specific data
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
