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

int main() {

int offset = 0;
char str[81];
char input;
char nou[81];
int rev = 0;
bool boolaid = false;

//clears RAM
 for (int i = 0; i < 81; i++) {
   str[i] = 32;
 }
 
 cout << "Type anything and it will determine whether it's a palidrome or not.\n" << endl;
 cin.getline(str, 80);
 
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
 
//checks if palidrome or not
 for (int a = 0, b = strlen(str) - 1; a < strlen(str); a++, b--) {
   //cout << str[a] << "(" << a << "), " << str[b] << "(" << b << ")" << endl;
     if (str[a] != str[b]) {
       boolaid = true;
     }
 }
   if (boolaid == false) {
   cout << "This is a palindrome.";
   return 0;
 }
   else if (boolaid == true) {
     cout << "This is not a palindrome.";
     return 0;
   }
}
