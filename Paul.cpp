/*
Austyn Ngo
9/26/19
Greg helped with a part of a program
 */

#include <iostream>
#include <vector>

using namespace std;
//alt + x + linum-mode
//palidrome is a thing that does thing, example: doggod = palidrome, apple = not palidrome
//No more words than 80

/*
Reminder:
- do the palidrome thing
- 
 */

int main() {

char str[80];
char input;

//clears RAM
 for (int i = 0; i < 80; i++) {
   str[i] = 32;
 }
 
 cout << "Type anything and it will determine whether it's a palidrome or not.\n" << endl;
 cin.getline(str, 80);

//checks for punctuations, spaces, lowercases, etc
for (int i = 0; i < sizeof(str); i++) {
  //converts lowercases to uppercases
  if (str[i] >= 97 && str[i] <= 122) {
    str[i] -= 32;
    cout << " " << str[i];
  }
  //converts punctuations to blanks, a period for now
  if (str[i] <= 64 || str[i] >= 91) {
    str[i] = 46;
    cout << " " << str[i];
  }
  //converts spaces to periods
  if (str[i] == 32) {
    str[i] = (char)46;
    cout << " " << str[i];
  }
  //keeps the uppercases
  if (str[i] <= 123 || str[i] >= 96) {
    str[i] >= 64;
    str[i] <= 91;
    cout << " " << str[i];
  }
 }

//checks if palidrome or not
 for (int a = 0; a < strlen(str); a++) {
   strlen - 1;
 }
 return 0;
}
