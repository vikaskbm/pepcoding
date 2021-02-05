// Any Base Addition

// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to add the two numbes and print their value in base b.

// b=8
// n1=777
// n2=1

// 1000


#include <iostream>
using namespace std;

int base_addition(int b, int num1, int num2) {
    int n1 = num1;
    int n2 = num2;
    int res = 0;
    int carry = 0;
    int mul = 1;

    while(n1 > 0 || n2 > 0 || carry > 0){
        int temp = n1%10 + n2%10 + carry;
        carry = temp / b;
        temp = temp % b;
        res = res + mul*temp;
        n1 = n1/10;
        n2 = n2/10;
        mul = mul*10;
    }
    return res;
}

int main() {
    int num1, num2, b;
    cin >> b >> num1 >> num2;
    cout << base_addition(b, num1, num2);
    return 0;
}