// Count Digits In A Number

// 1. You've to count the number of digits in a number.
// 2. Take as input "n", the number for which the digits has to be counted.
// 3. Print the digits in that number.

#include <iostream>
using namespace std;

void count_digits(int num) {
    int count = 0;
    int n = num;
    while(n > 0) {
        count++;
        n = n / 10;
    }
    cout << count;
}


int main(){
    int num;
    cin >> num;
    count_digits(num);
}