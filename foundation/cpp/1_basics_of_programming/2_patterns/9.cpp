// Pattern 9

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.

// n=5


//  *				*	
// 	    *		*		
// 		    *			
// 	    *		*		
//  *				*	


#include <iostream>
using namespace std;

void pattern_9(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if(j == i || j == num-i+1)
                cout << "*	";
            else 
                cout << "	";
        }
        cout  << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_9(n);
}