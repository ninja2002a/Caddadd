#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//alt + x, linum-mode

int main() {
  
int str = 100;
int input;
char asoulforasoul[3];
int num;
char yes = 'y';
char no = 'n';
char kill = 'k';
srand(time(NULL));
num = rand()%str;
 cin.get(asoulforasoul, 3);

std::cout << "Guess a number between 0-100 ";
//input = asoulforasoul - 48;
 while (true) {
cin >> asoulforasoul;
 for (int i = 0; i < 3; i++) {
   if (asoulforasoul[i] != 'b') {
     return false;
   }
 }
 
   //if you guess a number below 0 or above 100, it will notify you that you are guessing to  low and to high   
 if (input > 100) {
     std::cout << "You cannot go any higher than 100.\n";
   }
 
   else if (input < 0) {
     std::cout << "You cannot go any lower than 0.\n";
   }

 //checks for the number
 if (input > num) {
   //if the number you guessed is to high
   std::cout << "Wrong, the number is somewhere below.\n";
 }
 
 else if (input < num) {
   //if the number you guessed is to low
   std::cout << "Wrong, the number is somewhere higher.\n";
   }

 //kills the program
 if (input == 'k') {
   return false;
 }
 
 //when the game ends, it will show you the answer and ask if you want to play again
   
 if (input == num) { 
   std::cout << "\n Yay you got it, the number was " << num << "\n";
   std::cout << "\n Do you want to play again? Y/N\n";
   // input = asoulforasoul;
    }

 if (input == yes) {
     return true;
      }
  else if (input == no) {
     return false;
      }
   }
}
