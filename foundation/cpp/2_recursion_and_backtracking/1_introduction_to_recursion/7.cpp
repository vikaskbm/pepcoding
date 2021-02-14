// Print Zigzag

// 1. Here are a few sets of inputs and outputs for your reference
// Input1 -> 1
// Output1 -> 1 1 1

// Input2 -> 2
// Output2 -> 2 1 1 1 2 1 1 1 2

// Input2 -> 3
// Output3 -> 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

// 2. Figure out the pattern and complete the recursive function pzz to achieve the above for any positive number n.


// n=3

// 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3


#include<iostream>

void pzz(int n){
    if(n==0){
        return;
    } else {
        std::cout<< n << " ";
        pzz(n-1);
        std::cout<< n << " ";
        pzz(n-1);
        std::cout<< n << " ";
    }
}

int main() {
    int n;
    std::cin>> n;
    pzz(n);
}