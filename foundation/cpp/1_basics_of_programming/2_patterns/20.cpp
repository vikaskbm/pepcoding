// Pattern 20

// 1. You are given a number n.
// 2. You've to write code to print the pattern given in output format below.

// n=5

//  *				*	
//  *				*	
//  *		*		*	
//  *	*		*	*	
//  *				*	


#include <iostream>
using namespace std;

void pattern_20(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= num; j++) {
            if (j == 1 || j == num)
                cout << "*	";
            else if (i > num/2 && (j == 1 || j == num || j == i || j == num-i+1))
                cout << "*	";
            else 
                cout << "	";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_20(n);
}