// Gcd And Lcm

// 1. You are required to print the Greatest Common Divisor (GCD) of two numbers.
// 2. You are also required to print the Lowest Common Multiple (LCM) of the same numbers.
// 3. Take input "num1" and "num2" as the two numbers.
// 4. Print their GCD and LCM.

#include <iostream>
using namespace std;

void gcd_lcm(int a, int b) {
    int gcd, lcm;
    lcm = a * b;

    while(b != 0) {
        int temp = a;
        a = b;
        b = temp % a;
    }
    gcd = a;
    lcm = lcm / gcd;
    cout << gcd << endl;
    cout << lcm << endl;

}

int main(){
    int a, b;
    cin >> a >> b;
    gcd_lcm(a, b);
}