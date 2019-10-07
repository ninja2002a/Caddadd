#include <iostream>

using namespace std;
//alt + x + linum-mode

int main() {

  int board[3][3];
  int CLEAR = 0;
  int playerA = 1;
  int playerB = 2;
  int Aturn = 0;
  int Bturn = 1;
  int Amove;
  int Bmove;
  int AwinCount = 0;
  int BwinCount = 0;
 
  //checks win for playerA
  bool checkWinA(int playerA)
  {
  if (board[0][0] == playerA && board[0][1] == playerA && board[0][2] == playerA) { //top row
    return 1;
  }
  if (board[1][0] == playerA && board[1][1] == playerA && board[1][2] == playerA) { //middle row
    return 1;
  }
  if (board[2][0] == playerA && board[2][1] == playerA && board[2][2] == playerA) { //bottom row
    return 1;
  }
  if (board[0][0] == playerA && board[0][2] == playerA && board[2][0] == playerA) { //ver top
    return 1;
  }
  if (board[1][0] == playerA && board[1][1] == playerA && board[1][2] == playerA) { //ver middle
    return 1;
  }
  if (board[2][0] == playerA && board[2][1] == playerA && board[2][2] == playerA) { //ver bottom
    return 1;
  }
  if (board[2][0] == playerA && board[1][1] == playerA && board[0][2] == playerA) { //diagonal right
    return 1;
  }
  if (board[0][0] == playerA && board[1][1] == playerA && board[2][2] == playerA) { //diagonal left
    return 1;
  }
}
  /* //checks tie
  bool checkTie()
  {
    
  }*/
  
  //clears board
  
  
  //checks win for playerB

  return 0;
}
