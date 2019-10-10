#include <iostream>
#include <cstring>

using namespace std;
//alt + x + linum-mode

int board[3][3];
char mum[4];
int CLEAR = 0;
int playerA = 1;
int playerB = 2;
int Aturn = 0;
int Bturn = 1;
bool Amove = true;
bool Bmove = false;
int AwinCount = 0;
int BwinCount = 0;
char full;

//checks for win
bool checkWin() {
  if (playerA || playerB == true) {
  }
}

 
  //checks win for playerA
  bool checkWinA(int playerA) {
  if (board[0][0] == playerA && board[0][1] == playerA && board[0][2] == playerA) { //top row
    checkWin();
  }
  if (board[1][0] == playerA && board[1][1] == playerA && board[1][2] == playerA) { //middle row
    checkWin();
  }
  if (board[2][0] == playerA && board[2][1] == playerA && board[2][2] == playerA) { //bottom row
    checkWin();
  }
  if (board[0][0] == playerA && board[0][2] == playerA && board[2][0] == playerA) { //ver top
    checkWin();
  }
  if (board[1][0] == playerA && board[1][1] == playerA && board[1][2] == playerA) { //ver middle
    checkWin();
  }
  if (board[2][0] == playerA && board[2][1] == playerA && board[2][2] == playerA) { //ver bottom
    checkWin();
  }
  if (board[2][0] == playerA && board[1][1] == playerA && board[0][2] == playerA) { //diagonal right
    checkWin();
  }
  if (board[0][0] == playerA && board[1][1] == playerA && board[2][2] == playerA) { //diagonal left
    checkWin();
  }
}

//creates the board
int printBoard() {
  // cout << " 0 1 2" << endl << "a\n" << "b\n" << "c\n";
  for (int hor = 0; hor < sizeof(board); hor++) {
    cout << "  0" << " 1" << " 2" << endl;
    // return 1;
    for (int ver = 0; ver < sizeof(board); ver++) {
      cout << "a\n" << "b\n" << "c\n";
      return 1;
      if (board[hor][ver] == CLEAR) {
	cout << " \n" << "ere";
      }
	else if (board[hor][ver] == Aturn) {
	  cout << "x\n";
      }
	else if (board[hor][ver] == Bturn) {
	  cout << "O\n";
      }
      //fix cout
    }
  }
}

  
  int main() {
    while(true) {
    char input[2];
    printBoard();
    cin >> input;
    if (input[0] >= 96 && input[0] <= 100 && input[1] >= 47 && input[1] <= 51 && Amove) {
      cout << board[1][2] << "x";// == Aturn;
      Amove = false;
      Bmove = true;
      printBoard();
      cout << "yes";
    }
   else if (input[0] >= 96 && input[0] <= 100 && input[1] >= 47 && input[1] <= 51 && Bmove) {
      board[0][0] == Bturn;
      Bmove = false;
      Amove = true;
      printBoard();
      cout << "no";
    }
    return 0;
  }
}
