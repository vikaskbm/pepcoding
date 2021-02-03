// Pattern 14

// 1. You are given a number n.
// 2. You've to write code to print it's multiplication table up to 10 in format given below.

// n=3

// 3 * 1 = 3
// 3 * 2 = 6
// 3 * 3 = 9
// 3 * 4 = 12
// 3 * 5 = 15
// 3 * 6 = 18
// 3 * 7 = 21
// 3 * 8 = 24
// 3 * 9 = 27
// 3 * 10 = 30


#include<iostream>
using namespace std;

void pattern_14(int num) {
    for(int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num*i << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_14(n);
}