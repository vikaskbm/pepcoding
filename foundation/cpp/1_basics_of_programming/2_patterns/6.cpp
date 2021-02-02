// Pattern 6

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.

// n=5

// *	*	*		*	*	*	
// *	*				*	*	
// *						*	
// *	*				*	*	
// *	*	*		*	*	*	


#include <iostream>
using namespace std;

void pattern_6(int num) {
    int st = num/2 + 1;
    int sp = 1;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= st; j++) cout << "*	";

        for (int j = 1; j <= sp; j++) cout << "	";

        for (int j = 1; j <= st; j++) cout << "*	";

        if (i <= (num / 2)) {
            sp += 2;
            st--;
        } else {
            sp -= 2;
            st++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_6(n);
}