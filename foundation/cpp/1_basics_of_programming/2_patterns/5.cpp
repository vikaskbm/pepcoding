// Pattern 5

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.

// n=5

// 		    *	
// 	    *	*	*	
//  *	*	*	*	*	
// 	    *	*	*	
// 		    *	


#include <iostream>
using namespace std;

void pattern_5(int num) {
    int sp = num / 2;
    int st = 1;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= sp; j++) cout << "	";
        for (int j = 1; j <= st; j++) cout << "*	";
        if (i <= (num / 2)) {
            sp--;
            st += 2;
        } else {
            sp++;
            st -= 2;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_5(n);
}