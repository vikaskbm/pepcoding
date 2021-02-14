// Print Decreasing

// 1. You are given a positive number n. 
// 2. You are required to print the counting from n to 1.
// 3. You are required to not use any loops. Complete the body of print Decreasing function to achieve it.

// n=5

// 5
// 4
// 3
// 2
// 1


#include <iostream>
using namespace std;

void printDecreasing(int n){
    if (n==1) 
        std::cout<<n<<std::endl;
    else {
        std::cout<<n<<std::endl;
        printDecreasing(n-1);
    }
}

int main() {
    int n;
    std::cin >> n;
    printDecreasing(n);
}