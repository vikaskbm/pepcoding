// Pattern 18

// 1. You are given a number n.
// 2. You've to write code to print the pattern given in output format below

// n=7

//  *	*	*	*	*	*	*	
// 	    *				*	
// 		    *		*	
// 			    *	
// 		    *	*	*	
// 	    *	*	*	*	*	
//  *	*	*	*	*	*	*	


#include <iostream>
using namespace std;
void pattern_18(int num) {
    int sp = 0;
    int st = num;

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= sp; j++) {
            cout << "	";
        }

        for(int j = 1; j <= st; j++) {
            if((j > 1 && j < st) && (i > 1 && i < num/2+1))
                cout << "	";
            else cout << "*	";
        }

        if(i <= num/2) {
            sp++;
            st-=2;
        } else {
            sp--;
            st+=2;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_18(n);
}


