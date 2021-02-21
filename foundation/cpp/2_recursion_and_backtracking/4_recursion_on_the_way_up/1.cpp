// Print Subsequence

// 1. You are given a string str.
// 2. Complete the body of printSS function - without changing signature - to calculate and print all subsequences of str.
// Use sample input and output to take idea about subsequences.

// yvTA

// yvTA
// yvT
// yvA
// yv
// yTA
// yT
// yA
// y
// vTA
// vT
// vA
// v
// TA
// T
// A
//


#include <iostream>
using namespace std;

void printSS(string ques, string ans){
    if(ques==""){
        cout<<ans<<endl;
        return;
    }
    char c = ques.at(0);
    string ss = ques.substr(1);
    printSS(ss, ans+c);
    printSS(ss, ans);
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}