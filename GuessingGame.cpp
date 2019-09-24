/*
program is a guessing game
Austyn Ngo
Greg helped program
9/24/19
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//alt + x, linum-mode5C

int checkWin(int num) {
  //once number guessed correctly, it will ask if you want to play again or not
  char yes = 'y';
  char no = 'n';
  char input;
  int str = 100;
  // srand(time(NULL));
  // num = rand()%str;
  
      cout << "\n Yay you got it, the number was " << num << endl;
      cout << "\n Do you want to play again? Y/N" << endl;
      cin >> input;
      
      if (input == yes) {
	cout << "Guess a number between 0-100 ";
	return 1;
      }
      else if (input == no) {
	return 0;
      }
      
}

int main() {
  
int str = 100;
int input;
char asoulforasoul[3];
int num;
srand(time(NULL));
num = rand()%str;

std::cout << "Guess a number between 0-100 ";
//input = asoulforasoul - 48;
 
 while (true) {
cin >> input;
 
   //if you guess a number below 0 or above 100, it will notify you that you are guessing to  low and to high   
 if (input > 100) {
   std::cout << "You cannot go any higher than 100." << endl;
   }
 
   else if (input < 0) {
     std::cout << "You cannot go any lower than 0." << endl;
   }

 //checks for the number
 if (input > num) {
   //if the number you guessed is to high
   std::cout << "Wrong, the number is somewhere below." << endl;
 }
 
 else if (input < num) {
   //if the number you guessed is to low
   std::cout << "Wrong, the number is somewhere higher." << endl;
    }
 
 if (input == num) {
   //if you guessed the number correctly
   if (checkWin(num) == 0) {
     return 0; 
   }
 else {
   num = rand()%str;
      }
    }
  }
}
