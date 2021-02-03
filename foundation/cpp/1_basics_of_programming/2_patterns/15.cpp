// Pattern 15

// 1. You are given a number n.
// 2. You've to write code to print it's multiplication table up to 10 in format given below.

// n=5

// 		1
// 	2	3	2	
// 3	4	5	4	3	
// 	2	3	2	
// 		1


#include <iostream>
using namespace std;

void pattern_15(int num) {
    int sp = num / 2;
    int st = 1;
    for(int i = 1; i <= num; i++) {
        int temp = i;
        if (i > num / 2) {
            temp = num - i+1;
        } 
        for(int j = 1; j <= sp; j++) cout << "	";

        for(int j = 1; j <= st; j++) {
            cout << temp << "	";
            if(j >= st/2+1) temp--; 
            else temp++;
        }
        cout << endl;
        if (i <= num/2) {
            st+=2;
            sp--;
        } else {
            st-=2;
            sp++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    pattern_15(n);
}