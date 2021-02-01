// Print All Primes Till N
// 1. You've to print all prime numbers between a range. 
// 2. Take as input "low", the lower limit of range.
// 3. Take as input "high", the higher limit of range.
// 4. For the range print all the primes numbers between low and high (both included).

#include <iostream>
using namespace std;

bool is_prime(int num) {
    bool prime = true;
    for(int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    } 
    return true;
}

void print_prime(long int low, long int high) {
    bool prime;
    while(low <= high) {
        prime = is_prime(low);
        if (prime) 
            cout << low << endl;
        low++;
    }
}

int main(int argc, char **argv){
    long int low, high;
    cin >> low >> high;
    print_prime(low, high);
    return 0;

}