// Print Increasing Decreasing

// 1. You are given a positive number n. 
// 2. You are required to print the counting from n to 1 and back to n again.
// 3. You are required to not use any loops. Complete the body of pdi function to achieve it. Don't change the signature of the function.

// n=3

// 3
// 2
// 1
// 1
// 2
// 3


#include<iostream>
using namespace std;

void printIncDec(int n) {
    if(n==1){
        std::cout<<n<<std::endl;
        std::cout<<n<<std::endl;
    }
    else {
        std::cout<<n<<std::endl;
        printIncDec(n-1);
        std::cout<<n<<std::endl;
    }
}

int main() {
    int n;
    std::cin>>n;
    // printDecreasing(n);
    // printIncreasing(n);
    printIncDec(n);
}