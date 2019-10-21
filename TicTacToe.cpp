#include <iostream>
#include <cstring>

using namespace std;
//alt + x + linum-mode

const int CLEAR = 0;

int printBoard(int Aturn, int Bturn, int** board);

//checks for win
/*bool checkWinB(int playerB, int** board) {
  if (board[0][0] == playerB && board[0][1] == playerB && board[0][2] == playerB) { //top row
    cout << "bwin";
  }
}*/

 
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
  return true;
}

//creates the board
int printBoard(int Amove, int Bmove, int** board) {
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
	else if (board[hor][ver] == Amove) {
	  cout << "X\n";
      }
	else if (board[hor][ver] == Bmove) {
	  cout << "O\n";
      }
    }
  }
}

//checks for turns
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
 int MLA;

 cout << "Enter a letter from a-c and a number 0-2 to place your piece.\n";
 
   while(true) {
     char input[3];
     Amove = true;
     cin.getline(input, 3);
    if (input[0] >= 96 && input[0] <= 100 && input[1] >= 47 && input[1] <= 51 && Amove == true) {
      Amove = false;
      Bmove = true;
      printBoard(Amove, Bmove, board);
      cout << "Player B turn\n";
    }
   else if (input[0] >= 96 && input[0] <= 100 && input[1] >= 47 && input[1] <= 51 && Bmove == true) {
      Bmove = false;
      Amove = true;
      printBoard(Amove, Bmove, board);
      cout << "Player A turn\n";
    }
    return 0;
   }
}
