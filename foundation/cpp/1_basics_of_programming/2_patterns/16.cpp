// Pattern 16

// 1. You are given a number n.
// 2. You've to write code to print the pattern given in output format below

// n=7

//  1												1	
//  1	2										2	1	
//  1	2	3								3	2	1	
//  1	2	3	4						4	3	2	1	
//  1	2	3	4	5				5	4	3	2	1	
//  1	2	3	4	5	6		6	5	4	3	2	1	
//  1	2	3	4	5	6	7	6	5	4	3	2	1	


#include <iostream>
using namespace std;
void pattern_16(int num) {
    int sp = 2*num - 3;
    int st = 1;
    for(int i = 1; i <= num; i++) {
        for(int j = 1 ; j <= st; j++) cout << j << "	";

        for(int j = sp; j > 0; j--) cout << "	";
        
        if(i == num) st--;
        for(int j = st; j > 0; j--) cout << j << "	";
        cout << endl;

        sp -= 2;
        st += 1;
    }
}

int main() {
    int n;
    cin >> n;
    pattern_16(n);
}