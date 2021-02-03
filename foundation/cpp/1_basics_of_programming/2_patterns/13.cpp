// Pattern 13

// 1. You are given a number n.
// 2. You've to write code to print it's multiplication table up to 10 in format given below.

// n=5

// 1	
// 1	1	
// 1	2	1	
// 1	3	3	1	
// 1	4	6	4	1	


#include <iostream>
using namespace std;

void pattern_13(int num) {
    for(int n = 0; n < num; n++) {
        int val = 1;
        for(int r = 0; r<=n; r++) {
            cout << val << "	";
            val = (n-r) * val / (r+1);
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_13(n);
}