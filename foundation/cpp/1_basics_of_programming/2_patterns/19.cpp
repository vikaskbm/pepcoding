// Pattern 19

// 1. You are given a number n.
// 2. You've to write code to print the pattern given in output format below

// n=5

//  *	*	*	   	*	
//         	*     	*	
//  *	*	*	*	*	
//  *		*	        
//  *		*	*	*	


#include <iostream>
using namespace std;

void pattern_19(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            if (i == 1 && (j <= num/2+1 || j == num)) {
                cout << "*	";
            } else if (i <= num/2 && (j == num/2+1 || j == num)) {
                cout << "*	";
                
            } else if (i == num/2+1) {
                cout << "*	";
                
            } else if ((i > num/2 && i < num) && (j == 1 || j == num/2+1)) {
                cout << "*	";
                
            } else if (i == num && (j > num/2 || j == 1)) {
                cout << "*	";

            } else {
                cout << "	";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_19(n);
}