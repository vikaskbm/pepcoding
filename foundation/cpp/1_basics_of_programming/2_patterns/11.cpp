// Pattern 11

// 1. You are given a number n.
// 2. You've to create a pattern as shown in output format.

//  1	
//  2	3	
//  4	5	6	
//  7	8	9	10	
//  11	12	13	14	15


#include <iostream>
using namespace std;

void pattern_11(int num) {
    int count = 1;
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j<=i; j++) {
            cout << count << "	";
            count++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_11(n);
}