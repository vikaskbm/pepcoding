// Pattern 4

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.

// n=5

//  *	*	*	*	*	
// 	    *	*	*	*	
// 		    *	*	*	
// 			    *	*	
// 				    *


#include <iostream>
using namespace std;

void pattern_4(int num) {
    for(int i = num; i > 0; i--) {
        int sp = num - i;
        for(int j = 1; j <= sp; j++) cout << "	";
        for(int j = 1; j <= i; j++) cout << "*	";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_4(n);
}