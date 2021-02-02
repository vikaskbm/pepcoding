// Pattern 8

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.

// n=5


// 				*	
// 			*		
// 		*			
// 	*				
// *


#include <iostream>
using namespace std;

void pattern_8(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            cout << "	";
        }
        cout << "*	" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_8(n);
}