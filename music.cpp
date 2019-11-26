#include <iostream>
#include <vector>
#include "music.h"

music::music() {
  title = new char[100];
  artist = new char[100];
  year = new char[10];
  duration = new char[100];
  publisher = new char[100];
  rating = new char[10];
}
