// Print Increasing

// 1. You are given a positive number n. 
// 2. You are required to print the counting from 1 to n.
// 3. You are required to not use any loops. Complete the body of print Increasing function to achieve it. Don't change the signature of the function.

// n=5

// 1
// 2
// 3
// 4
// 5


#include<iostream>
using namespace std;

void printIncreasing(int n){
    if(n==1)
        std::cout<< n << std::endl;
    else {
        printIncreasing(n-1);
        std::cout<< n << std::endl;
    }
}

int main() {
    int n;
    std::cin>>n;
    printIncreasing(n);
}