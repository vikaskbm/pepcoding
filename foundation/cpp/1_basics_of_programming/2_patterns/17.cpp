// Pattern 17

// 1. You are given a number n.
// 2. You've to write code to print the pattern given in output format below.

// n=5

//   		*	
//   		*	*	
//   *	*	*	*	*	
//   		*	*	
//   		*


#include <iostream>
using namespace std;

void pattern_17(int num) {
    int sp, st;
    int t = 1;

    for(int i = 1; i <= num; i++) {
        if(i == num/2+1) {
            sp = 0;
            st = num;
        }
        else {
            sp = num / 2;
            st = t;
        }
        for(int j = 1; j <= sp; j++){
            cout << "	";
        }
        for(int j = 1; j <= st; j++) {
            cout << "*	";
        }

        if (i <= num/2) t++;
        else t--;

        
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_17(n);
}