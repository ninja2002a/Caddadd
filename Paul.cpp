gemacs Paul.cpp
/*
Austyn Ngo
9/26/19
Greg helped with a part of a program
 */

#include <iostream>
#include <vector>
#include <stdio.h>
#include <cstring>

using namespace std;
//alt + x + linum-mode
//palidrome is a thing that does thing, example: doggod = palidrome, apple = not palidrome
//No more words than 80
//

/*
Reminder:
- do the palidrome thing
- make spaces not count and non existent
 */

int main() {

  int offset = 0;
  
char str[81];
char input;
char nou[81];
int rev = 0;

//clears RAM
 for (int i = 0; i < 80; i++) {
   str[i] = 32;
 }
 
 cout << "Type anything and it will determine whether it's a palidrome or not.\n" << endl;
 cin.getline(str, 80);
 // cout << str << strlen(str);
//checks for punctuations, spaces, lowercases, etc
for (int i = 0; i < sizeof(str); i++) {
  //converts lowercases to uppercases
  if (str[i] >= 97 && str[i] <= 122) {
    str[i] -= 32;
  }
  
  //converts punctuations to blanks
  if (str[i] <= 64 || str[i] >= 91) {
    str[i] = 32;
  }
  //converts spaces to periods
  /* if (str[i] == 32) {
    str[i] = (char)0;
  }*/
  //keeps the uppercases
  if (str[i] <= 123 || str[i] >= 96) {
    str[i] >= 64 && str[i] < 91;
  }
  for (int j = 0; j < 81; j++) {
    if (str[j + offset] != 32) {
      nou[j] = str[j];
    }
    else {
      offset++;
    }
  }
  for (int j = 0; j < sizeof(nou); j++) {
    if (nou[j] == 32) {
      nou[j] = 0;
    }
  }
  cout << " " << str[i];
 }

 cout << strlen(str);
 
//checks if palidrome or not
 for (int a = 0; a < strlen(str); a++) {
   str[a] += (char)1;
   
   for (int b = strlen(str); b > 0; b--) {
     str[b] -= (char)1;

     if (str[i] == rev) {
       cout << "This is a palindrome.";
     }
     else {
       cout << "This is not a palindrome.";
     }
   }
 }
 return 0;
}
