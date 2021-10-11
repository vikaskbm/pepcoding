// Rotate A Number

// 1. You are given two numbers n and k. You are required to rotate n, k times to the right. 
// If k is positive, rotate to the right i.e. remove rightmost digit and make it leftmost. 
// Do the reverse for negative value of k. Also k can have an absolute value larger than number of digits in n.
// 2. Take as input n and k.
// 3. Print the rotated number.
// 4. Note - Assume that the number of rotations will not cause leading 0's in the result. e.g. such an input will not be given
//    n = 12340056
//    k = 3
//    r = 05612340

#include <iostream>
#include<cmath>

using namespace std;

int count_digits(int num) {
    int count = 0;
    int n = num;
    while(n > 0){
        n = n/10;
        count += 1;
    }
    return count;
}

void rotate_number(int num, int k) {
    int digits = count_digits(num);
    int mul = 1, div = 1;
    int res = 0;
    k = ((k % digits) + digits) % digits;
    
    for(int i = 1; i<= digits; i++) {
        if (i <= k) div *= 10;
        else mul *= 10;
    }
    res = ((num % div) * mul) + num/div;
    cout << res << endl;
}

int main(){
    int num, k;
    cin >> num >> k;
    rotate_number(num, k);
}