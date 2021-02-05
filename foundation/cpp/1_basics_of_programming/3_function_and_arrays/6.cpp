// Any Base Subtraction

// 1. You are given a base b.
// 2. You are given two numbers n1 and n2 of base b.
// 3. You are required to subtract n1 from n2 and print the value.

// b=8
// n1=1
// n2=100

// 77


#include <iostream>
using namespace std;

void base_subtraction(int b, int num1, int num2) {
    int n1 = num1;
    int n2 = num2;
    int res = 0;
    int carry = 0;
    int mul = 1;

    while(n2 > 0){
        int temp;
        if(n2%10+carry >= n1%10) {
            temp = carry + n2%10 - n1%10; 
            carry = 0;
        } else {
            temp = carry + n2%10 + b - n1%10;
            carry = -1;
        }

        res = res + mul*temp;
        mul = mul*10;

        n1 = n1/10;
        n2 = n2/10;
    }
    cout << res;
}

int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    base_subtraction(b, n1, n2);
    return 0;
}