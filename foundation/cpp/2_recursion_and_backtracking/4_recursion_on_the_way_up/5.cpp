// Print Maze Paths With Jumps

// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner. 
// 3. In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..). 
// 4. Complete the body of printMazePath function - without changing signature - to print the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// n=3
// m=3

// h1h1v1v1
// h1h1v2
// h1v1h1v1
// h1v1v1h1
// h1v1d1
// h1v2h1
// h1d1v1
// h2v1v1
// h2v2
// v1h1h1v1
// v1h1v1h1
// v1h1d1
// v1h2v1
// v1v1h1h1
// v1v1h2
// v1d1h1
// v2h1h1
// v2h2
// d1h1v1
// d1v1h1
// d1d1
// d2


#include<iostream>
using namespace std;


void printMazePaths(int sr, int sc, int dr, int dc, string psf) {
    if(sr==dr && sc==dc){
        cout << psf <<endl;
        return;
    }
    
    if(sc!=dc){
        for(int i=1; i<=(dc-sc); i++){
            printMazePaths(sr, sc+i, dr, dc, psf+'h'+to_string(i));
        }
    }
    
    if(sr!=dr){
        for(int i=1; i<=(dr-sr); i++){
            printMazePaths(sr+i, sc, dr, dc, psf+'v'+to_string(i));
        }
    }
    
    if(sc!=dc && sr!=dr){
        for(int i=1; i<=(dr-sr); i++){
            printMazePaths(sr+i, sc+i, dr, dc, psf+'d'+to_string(i));
        }
    }
}

int main() {
    int n ;
    int m ;cin>>n>>m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}