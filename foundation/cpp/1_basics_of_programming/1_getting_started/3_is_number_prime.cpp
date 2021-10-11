// Is A Number Prime
// 1. You've to check whether a given number is prime or not.
// 2. Take a number "t" as input representing count of input numbers to be tested.
// 3. Take a number "n" as input "t" number of times.
// 4. For each input value of n, print "prime" if the number is prime and "not prime" otherwise.

#include <iostream>
using namespace std;

void is_prime(int num) {
    bool prime = true;
    for(int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            prime = false;
            break;
        }
    } 

    if (prime == true)
        cout << "prime" << endl;
    else 
        cout << "not prime" << endl;
}


int main(int argc, char **argv){
    int t, n;
    cin >> t;
    for(int i = 0; i<t; i++) {
        cin >> n;
        is_prime(n);
    }
    
    
}