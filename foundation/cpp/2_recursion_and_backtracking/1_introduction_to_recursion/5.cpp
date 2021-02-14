// Power-linear

// 1. You are given a number x.
// 2. You are given another number n.
// 3. You are required to calculate x raised to the power n. Don't change the signature of power function .

// x=2
// n=5

// 32


#include<iostream>

int power(int x, int n){
    if(n==0){
        return 1;
    } else {
        return x * power(x, n-1);
    }
}

int main() {
    int x, n;
    std::cin>>x>>n;
    std::cout<< power(x, n) << std::endl;
}