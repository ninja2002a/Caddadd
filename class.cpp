#include <iostream>
#include <cstring>
#include <vector>
#include "rad.cpp"
#include "music.cpp"
#include "movie.cpp"

using namespace std;
//alt + x + linum-mode
//rad.cpp, music.cpp, movie.cpp

int main() {
  vector<rad*> gamelist;
  vector<music*> musiclist;
  vector<movie*> movielist;
  char* input = new char[10];

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
      gamelist.push_back(new rad());
      cout << "Enter a title: ";
      cin >> gamelist.back() -> title;
      cout << endl;
      
      cout << "Enter a year: ";
      cin >> gamelist.back() -> year;
      cout << endl;
      
      cout << "Enter the publisher: ";
      cin >> gamelist.back() -> publisher;
      cout << endl;
      
      cout << "Enter the rating: ";
      cin >> gamelist.back() -> rate;
      cout << endl;

      //displays what you add then sends it to VG.cpp as storage
      /*cout << "Title: " << rad.title << endl << "Year: " << rad.year << endl << "Publisher: " << rad.publisher << endl << "Rating: " << rad.rate << "/10" << endl;*/
    }

    //sends input to music.cpp as storage
    else if (strcmp(input,"MUSIC") == 0) {
      musiclist.push_back(new music());
      cout << "Enter the title: ";
      cin >> musiclist.back() -> title;
      cout << endl;

      cout << "Enter the artist: ";
      cin >> musiclist.back() -> artist;
      cout << endl;

      cout << "Enter the year: ";
      cin >> musiclist.back() -> year;
      cout << endl;

      cout << "Enter the length of the song: ";
      cin >> musiclist.back() -> duration;
      cout << endl;

      cout << "Enter the rating of the song: ";
      cin >> musiclist.back() -> rate;
      cout << endl;

      cout << "-------------------------------------------";

      /*cout << "Title: " << music.title << endl << "Artist: " << music.artist << endl << "Year: " << music.year << endl << "Length: " << music.duration << endl << "Rating: " << music.rating << "/10" << endl;*/
    }

    //sends input to movie.cpp as storage
  else if (strcmp(input,"MOVIE") == 0) {
    cout << "Enter a title: ";
    cin >> movielist.back() -> title;
    cout << endl;

    cout << "Enter the director: ";
    cin >> movielist.back() -> director;
    cout << endl;

    cout << "Enter the year: ";
    cin >> movielist.back() -> year;
    cout << endl;

    cout << "Enter the length of the movie: ";
    cin >> movielist.back() -> length;
    cout << endl;

    cout << "Enter the rating of the movie: ";
    cin >> movielist.back() -> rating;
    cout << endl;

    /*cout << "Title: " << movie.title << endl << "Director: " << movie.director << endl << "Year: " << movie.year << endl << "Length: " << movie.length << endl << "Rating: " << movie.rate << "/10" << endl;*/
    }
  }
  
  //will find that data you input
  else if (strcmp(input,"SEARCH") == 0) {
    cout << "What would you like to search? VG, MOVIE, MUSIC" << endl;
    cin >> input;
    if (strcmp(input,"VG") == 0) {
      cout << "d"; 
	}
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
