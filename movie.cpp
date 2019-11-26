#include <iostream>
#include <cstring>
#include "movie.h"

movie::movie() {
  title = new char[100];
  director = new char[100];
  year = new char[10];
  duration = new char[100];
  rating = new char[5];
};
