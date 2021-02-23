// N Queens

// 1. You are given a number n, the size of a chess board.
// 2. You are required to place n number of queens in the n * n cells of board such that no queen can kill another.
// Note - Queens kill at distance in all 8 directions
// 3. Complete the body of printNQueens function - without changing signature - to calculate and print all safe configurations of n-queens. Use sample input and output to get more idea.

// n=4

// 0-1, 1-3, 2-0, 3-2, .
// 0-2, 1-0, 2-3, 3-1, .


#include<iostream>
#include<vector>

using namespace std;

bool isQueenSafe(vector <vector <int>> board, int row, int col) {
    for(int r=row-1, c=col; r >=0; r--){
        if(board[r][c]==1){
            return false;
        }
    }
    for(int r=row-1, c=col-1; r>=0 && c>=0; r--, c--){
        if(board[r][c]==1){
            return false;
        }
    }
    for(int r=row-1, c=col+1; c<board.size() && r>=0; c++, r--){
        if(board[r][c]==1){
            return false;
        }
    }
    return true;
}

void printNQueen(vector <vector <int>> board, int r, string psf){
    if(r==board.size()){
        cout << psf+"." << endl;
        return;
    }
    for(int c=0; c < board.size(); c++){
        if(isQueenSafe(board, r, c)==true){
            board[r][c] = 1;
            printNQueen(board, r+1, psf+to_string(r)+"-"+to_string(c)+", ");
            board[r][c] = 0;
        }
    }
}

int main() {
    int n {};
    cin >> n;
    vector <vector <int>> board(n, vector <int> (n, 0));
    printNQueen(board, 0, "");
}