// Any Base To Decimal

// 1. You are given a number n.
// 2. You are given a base b. n is a number on base b.
// 3. You are required to convert the number n into its corresponding value in decimal number system.

// n=111001
// b=2

// 57


#include <iostream>
using namespace std;

int base_to_decimal(long int num, long int b) {
    long int n = num;
    long int res = 0;
    long int mul = 1;

    while(n > 0) {
        int temp = n % 10;
        n = n / 10;
        res = res + temp*mul;
        mul *= b;
    }
    return res;
}

int main() {
    int num, b;
    cin >> num >> b;
    cout << base_to_decimal(num, b);
    return 0;
}