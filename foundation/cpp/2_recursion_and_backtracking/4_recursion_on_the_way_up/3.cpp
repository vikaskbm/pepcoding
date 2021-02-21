// Print Stair Paths

// 1. You are given a number n representing number of stairs in a staircase.
// 2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
// 3. Complete the body of printStairPaths function - without changing signature - to print the list of all paths that can be used to climb the staircase up.
// Use sample input and output to take idea about output.

// n=3

// 111
// 12
// 21
// 3


#include <iostream>
using namespace std;

void printStairPaths(int n, string psf){
    if(n <= 0){
        cout << psf << endl;
        return;
    }
    for(int i=1; i <= 3 && i <= n; i++){
        printStairPaths(n-i, psf+to_string(i));
    }
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}