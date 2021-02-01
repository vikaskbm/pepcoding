// Reverse A Number

// 1. You've to display the digits of a number in reverse.
// 2. Take as input "n", the number for which digits have to be display in reverse.
// 3. Print the digits of the number line-wise, but in reverse order.

#include <iostream>
using namespace std;

void reverse_number(long int num) {
    long int rev = 0;
    long int n = num;
    while(n > 0) {
        rev = (rev*10) + (n%10);
        cout << n%10 << endl;
        n = n / 10;
    }
}

int main(){
    long int num;
    cin >> num;
    reverse_number(num);
}