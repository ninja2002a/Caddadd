#include <iostream>
#include <cstring>

using namespace std;
//alt + x + linum-mode

const int CLEAR = 0;

//checks for win
bool checkWinB(int playerB, int** board) {
  if (board[0][0] == playerB && board[0][1] == playerB && board[0][2] == playerB) { //top row
    cout << "bwin";
  }
}

 
  //checks win for playerA
bool checkWinA(int playerA, int** board) {
  if (board[0][0] == playerA && board[0][1] == playerA && board[0][2] == playerA) { //top row
    // checkWin();
    return false;
  }
  if (board[1][0] == playerA && board[1][1] == playerA && board[1][2] == playerA) { //middle row
    return false;
  }
  if (board[2][0] == playerA && board[2][1] == playerA && board[2][2] == playerA) { //bottom row
    return false;
  }
  if (board[0][0] == playerA && board[0][2] == playerA && board[2][0] == playerA) { //ver top
    return false;
  }
  if (board[1][0] == playerA && board[1][1] == playerA && board[1][2] == playerA) { //ver middle
    return false;
  }
  if (board[2][0] == playerA && board[2][1] == playerA && board[2][2] == playerA) { //ver bottom
    return false;
  }
  if (board[2][0] == playerA && board[1][1] == playerA && board[0][2] == playerA) { //diagonal right
    return false;
  }
  if (board[0][0] == playerA && board[1][1] == playerA && board[2][2] == playerA) { //diagonal left
    return false;
  }
}

//creates the board
int printBoard(int Aturn, int Bturn, int** board) {
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
    }
  }
}
int main() {
 int** board = new int*[3];
 for (int a = 0; a < 3; a++){
   board[a] = new int[3];
 }
 int playerA = 1;
 int playerB = 2;
 int Aturn = 0;
 int Bturn = 1;
 bool Amove = true;
 bool Bmove = false;
 int AwinCount = 0;
 int BwinCount = 0;
 char full;
  
   while(true) {
    char input[2];
    cout << "test";
    //printBoard(int Aturn, int Bturn, int** board);
    cin >> input;
    if (input[0] >= 96 && input[0] <= 100 && input[1] >= 47 && input[1] <= 51 && Amove) {
      cout << board[1][2] << "x";// == Aturn;
      Amove = false;
      Bmove = true;
      //printBoard(int Aturn, int Bturn, int** board);
      cout << "yes";
    }
   else if (input[0] >= 96 && input[0] <= 100 && input[1] >= 47 && input[1] <= 51 && Bmove) {
      board[0][0] == Bturn;
      Bmove = false;
      Amove = true;
      //printBoard(int Aturn, int Bturn, int** board);
      cout << "no";
    }
    return 0;
   }
}
