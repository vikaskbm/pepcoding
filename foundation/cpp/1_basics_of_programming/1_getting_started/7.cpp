// Digits Of A Number

// 1. You've to display the digits of a number.
// 2. Take as input "n", the number for which digits have to be displayed.
// 3. Print the digits of the number line-wise.

#include <iostream>
using namespace std;

void digits_of_number(long int num) {
    long int n = num;
    long int mult = 1;
    while(n > 0) {
        n = n / 10;
        mult *= 10;
    }
    mult /= 10;
    n = num;
    while(mult != 0) {
        cout << n / mult << endl;
        n = n % mult;
        mult /= 10;
    }
}


int main(){
    long int num;
    cin >> num;
    digits_of_number(num);
}