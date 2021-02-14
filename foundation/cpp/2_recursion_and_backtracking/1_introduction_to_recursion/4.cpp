// Factorial

// 1. You are given a number n.
// 2. You are required to calculate the factorial of the number. Don't change the signature of factorial function.

// n=5

// 120


#include<iostream>

int factorial(int n){
    if(n==1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int n;
    std::cin>>n;
    std::cout<< factorial(n) << std::endl;
}