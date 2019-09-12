#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//alt + x, linum-mode

int main() {
  
int str = 100;
int input;
int num;
srand(time(NULL));
num = rand()%str;
 
 std::cout << "Guess a number between 0-100 ";
 while (true) {
   cin >> input;
   
   //if you guess a number below 0 or above 100, it will notify you that you are guessing to  low and to high   
 if (input > 100) {
     std::cout << "Input: " << input << " To high\n";
   }
 
   else if (input < 0) {
     std::cout << "Input: " << input << " To low\n";
   }

 //checks for the number
 if (input > num) {
   //if the number you guessed is to high
   std::cout << "Wrong\n";
 }
 
 else if (input < num) {
   //if the number you guessed is to low
   std::cout << "Wrong\n";
 }
 
 else if (input == num) {
   std::cout << "Yay you got it\n";
   return false;
      }
   }
}
