// Digit Frequency

// 1. You are given a number n.
// 2. You are given a digit d.
// 3. You are required to calculate the frequency of digit d in number n.

// n=994543234
// d=4

// 3


#include <iostream>

using namespace std;

void digit_frequency(int num, int k) {
    int count = 0;
    int n = num;

    while(n > 0) {
        int temp = n % 10;
        if (temp == k) count++;
        n = n / 10;
    }
    cout << count << endl;
}

int main() {
    int num, k;
    cin >> num >> k;
    digit_frequency(num, k);
}