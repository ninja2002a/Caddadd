#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//alt + x, linum-mode

int main() {
  
int str[100];
int input;
 std::cout << "Guess a number between 0-100 ";
 while (true) {
   cin >> input;
   // cin.get(str, 100);
   rand(input);
   }
}


 int rand(int input) {
  //Chooses a number between 0-100
int ran[100];
 srand(time(NULL));
   
   if (input > rand) {
     std::cout << "Input: " << input << " To high\n";
   }
   
   else if (input < rand) {
     std::cout << "Input: " << input << " To low\n";
   }
 }
