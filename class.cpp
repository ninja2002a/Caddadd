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
  music.title = new char[100];
  music.artist = new char[100];
  music.year = new char[15];
  music.duration = new char[100];
  music.publisher = new char[100];
  music.rating = new char[5];
  movie.title = new char[100];
  movie.director = new char[100];
  movie.year = new char[15];
  movie.length = new char[100];
  movie.rate = new char[5];

  while(true) {
    cout << "Commands: ADD, SEARCH, DELETE, QUIT" << endl;
  cin >> input;

  //asks what you want to add
  if (strcmp(input,"ADD") == 0) {
    cout << "What do you want to add? VIDEOGAME, MUSIC, MOVIE" << endl;
    cin >> input;
    cin.ignore();
    cout << endl;
    
    if (strcmp(input,"VIDEOGAME") == 0) {
      cout << "Enter a title: ";
      cin >> VG.title;
      cout << endl;
      
      cout << "Enter a year: ";
      cin >> VG.year;
      cout << endl;
      
      cout << "Enter the publisher: ";
      cin >> VG.publisher;
      cout << endl;
      
      cout << "Enter the rating: ";
      cin >> VG.rate;
      cout << endl;

      //displays what you add then sends it to VG.cpp as storage
      cout << "Title: " << VG.title << endl << "Year: " << VG.year << endl << "Publisher: " << VG.publisher << endl << "Rating: " << VG.rate << "/10" << endl;
    }

    //sends input to music.cpp as storage
    else if (strcmp(input,"MUSIC") == 0) {
      cout << "Enter the title: ";
      cin >> music.title;
      cout << endl;

      cout << "Enter the artist: ";
      cin >> music.artist;
      cout << endl;

      cout << "Enter the year: ";
      cin >> music.year;
      cout << endl;

      cout << "Enter the length of the song: ";
      cin >> music.duration;
      cout << endl;

      cout << "Enter the rating of the song: ";
      cin >> music.rating;
      cout << endl;

      cout << "-------------------------------------------";

      cout << "Title: " << music.title << endl << "Artist: " << music.artist << endl << "Year: " << music.year << endl << "Length: " << music.duration << endl << "Rating: " << music.rating << "/10" << endl;
    }

    //sends input to movie.cpp as storage
  else if (strcmp(input,"MOVIE") == 0) {
    cout << "Enter a title: ";
    cin >> movie.title;
    cout << endl;

    cout << "Enter the director: ";
    cin >> movie.director;
    cout << endl;

    cout << "Enter the year: ";
    cin >> movie.year;
    cout << endl;

    cout << "Enter the length of the movie: ";
    cin >> movie.length;
    cout << endl;

    cout << "Enter the rating of the movie: ";
    cin >> movie.rate;
    cout << endl;

    cout << "Title: " << movie.title << endl << "Director: " << movie.director << endl << "Year: " << movie.year << endl << "Length: " << movie.length << endl << "Rating: " << movie.rate << "/10" << endl;
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
