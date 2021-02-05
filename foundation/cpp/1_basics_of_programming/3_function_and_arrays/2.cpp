// Deicmal To Any Base

// 1. You are given a decimal number n.
// 2. You are given a base b.
// 3. You are required to convert the number n into its corresponding value in base b.

// n=57
// b=2

// 111001


#include <iostream>
using namespace std;

int decimal_to_base(int num, int b) {
    int n = num;
    int mul = 1;
    int res = 0;

    while(n > 0) {
        int temp = n % b;
        n = n / b;
        res = res + temp*mul;
        mul *= 10;
    }
    return res;
}

int main() {
    int num, b;
    cin >> num >> b;
    cout << decimal_to_base(num, b);
    return 0;
}