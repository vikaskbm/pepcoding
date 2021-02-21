// Print Maze Paths

// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner. Only two moves are allowed 'h' (1-step horizontal) and 'v' (1-step vertical).
// 3. Complete the body of pri tMazePath function - without changing signature - to print the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// n=2
// m=2

// hv
// vh


#include <iostream>
using namespace std;
 
void printMazePaths(int sr, int sc, int dr, int dc, string psf){
    if(sr==dr && sc==dc){
        cout << psf <<endl;
        return;
    }
    
    if(sc!=dc)
        printMazePaths(sr, sc+1, dr, dc, psf+'h');
        
    if(sr!=dr)
        printMazePaths(sr+1, sc, dr, dc, psf+'v');    
}
 
int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}