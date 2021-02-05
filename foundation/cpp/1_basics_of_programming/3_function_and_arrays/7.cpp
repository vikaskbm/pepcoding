// Any Base Multiplication

// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to multiply n1 and n2 and print the value.

// b=5
// n1=1220
// n2=31

// 43320


#include <iostream>
using namespace std;

int single_digit_product(int b, int num1, int d2) {
    int c = 0;
    int n1 = num1;
    int res = 0;
    int mul = 1;

    while(n1 > 0 || c > 0) {
        int t = n1%10 * d2 + c;
        c = t/b;
        t = t%b;
        res += (t*mul);
        mul = mul*10;
        n1 = n1/10;
    }
    return res;
}

int base_addition(int b, int num1, int num2) {
    int mul = 1;
    int n1 = num1;
    int n2 = num2;
    int c = 0;
    int res = 0;

    while(n1 > 0 || n2 > 0 || c > 0){
        int t = n1%10 + n2%10 + c;
        c = t/b;
        t = t%b;
        res = res + t*mul;
        n1/=10;
        n2/=10;
        mul = mul*10;
    }

    return res;
}

int base_multiplication(int b, int num1, int num2) {
    int mul = 1;
    int n2 = num2;
    int res = 0;

    while(n2 > 0) {
        int d2 = n2%10;
        n2 = n2/10;

        int sprd = single_digit_product(b, num1, d2);
        res = base_addition(b, res, sprd*mul);
        mul = mul*10;
    }
    return res;

}

int main() {
    int num1, num2, b;
    cin >> b >> num1 >> num2;
    cout << base_multiplication(b, num1, num2);
    return 0;
}