// Print Fibonacci Numbers Till N
// 1. You've to print first n fibonacci numbers.
// 2. Take as input "n", the count of fibonacci numbers to print.
// 3. Print first n fibonacci numbers.


#include <iostream>
using namespace std;

void print_fibonacci(int num) {
    int a = 0;
    int b = 1;

    for(int i = 1; i <= num; i++){
        cout << a << endl;
        int c = a+b;
        a = b;
        b = c;
    }
}



int main(){
    int num;
    cin >> num;
    print_fibonacci(num);
    return 0;
}