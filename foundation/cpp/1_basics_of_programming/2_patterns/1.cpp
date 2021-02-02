// Pattern 1

// 1. You are given a number n.
// 2. You've to create a pattern of * and separated by tab as shown in output format.


#include <iostream>
using namespace std;

void pattern_1(int num) {
    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) cout << "*	";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_1(n);
}