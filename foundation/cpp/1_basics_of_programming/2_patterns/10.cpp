// Pattern 10

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.

// n=5


// 		    *	
// 	    *		*	
// *				*	
// 	    *		*	
// 		    *	

#include <iostream>
using namespace std;

void pattern_10(int num) {
    int sp1 = num/2;
    int sp2 = -1;
    for (int i = 1; i <= num; i++) {
        for(int j = 1; j <= sp1; j++) cout << "	";
        cout << "*	";
        for(int j = 1; j <= sp2; j++) cout << "	";
        if(i > 1 && i < num)
            cout << "*	";

        if(i <= num/2) {
            sp1--;
            sp2 += 2;
        } else {
            sp1++;
            sp2 -= 2;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_10(n);
}