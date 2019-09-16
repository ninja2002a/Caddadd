#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//alt + x, linum-mode

int main() {
  
int str = 100;
char input;
 int asoulforasoul;
int num;
char yes = 'y';
char no = 'n';
srand(time(NULL));
num = rand()%str;
 
 std::cout << "Guess a number between 0-100 ";
 while (true) {
cin >> input;
 asoulforasoul = input - 48;
 std::cout << asoulforasoul;
   
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
 
 //when the game ends, it will show you the answer and ask if you want to play again
 if (input == num) { 
   std::cout << "Yay you got it, the number was " << num << "\n";
   std::cout << "Do you want to play again? Y/N\n";
    }

   if (input == yes) {
     return true;
      }
   else if (input == no) {
     return false;
      }
   }
}
