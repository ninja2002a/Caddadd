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
int Amove;
int Bmove;
int AwinCount = 0;
int BwinCount = 0;

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
    cout << 'a' + hor << " 0\n" + " 1\n" + " 2\n" ;
    for (int ver = 0; ver < sizeof(board); ver++) {
      if (board[hor][ver] == Amove) {
	
      }
	else if (board[hor][ver] == Bmove) {

      }
    }
  }
}
  
  //checks tie
  bool checkTie() {
    cout << "e";
}  
  
  int main() {
    printBoard();
  return 0;
}
