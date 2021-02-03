// Pattern 12

// 1. You are given a number n.
// 2. You've to create a pattern as shown in output format.

// n=5

// 0	
// 1	1	
// 2	3	5	
// 8	13	21	34	
// 55	89	144	233	377	


#include <iostream>
using namespace std;

void pattern_12(int num) {
    int a = 0;
    int b = 1;
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j<=i; j++) {
            cout << a << "	";
            int c = a+b;
            a = b;
            b = c;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_12(n);
}