// Any Base To Any Base

// 1. You are given a number n.
// 2. You are given a base b1. n is a number on base b.
// 3. You are given another base b2.
// 4. You are required to convert the number n of base b1 to a number in base b2.

// n=111001
// b1=2
// b2=3

// 2010


#include <iostream>
using namespace std;

int base_to_base(int num, int b1, int b2) {
    int n = num;
    int dec = 0;
    int mul = 1;
    while (n > 0) {
        int temp = n % 10;
        n = n / 10;
        dec = dec + temp*mul;
        mul = mul * b1;
    }
    
    mul = 1;
    n = dec;
    int res = 0;
    while(n > 0) {
        int temp = n % b2;
        n = n / b2;

        res = res + temp*mul;
        mul = mul * 10;
    }

    return res;
}

int main() {
    int num, b1, b2;
    cin >> num >> b1 >> b2;
    cout << base_to_base(num, b1, b2);
    return 0;
}