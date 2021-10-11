// Prime Factorisation Of A Number

// 1. You are required to display the prime factorization of a number.
// 2. Take as input a number n.
// 3. Print all its prime factors from smallest to largest.

#include <iostream>
using namespace std;

void prime_factorization(int num) {
    int n = num;
    while (n != 1) {
        for(int i = 2; i <= n; i++){
            if (n % i == 0) {          
                cout << i << " ";
                n = n / i;
                break;
            }
        }
    }
}

int main(){
    int num;
    cin >> num;
    prime_factorization(num);
}