// String With Difference Of Every Two Consecutive Characters

// 1. You are given a string that contains only lowercase and uppercase alphabets. 
// 2. You have to form a string that contains the difference of ASCII values of every two consecutive characters between those characters.
//    For "abecd", the answer should be "a1b3e-2c1d", as 
//    'b'-'a' = 1
//    'e'-'b' = 3
//    'c'-'e' = -2
//    'd'-'c' = 1

// pepCODinG

// p-11e11p-45C12O-11D37i5n-39G


#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    string s;
    s=str[0];
    for(int i=1; i<str.length(); i++){
        char c=str[i];
        char p=str[i-1];
        int d=c-p;
        s+=to_string(d)+c;
    }
    cout<<s<<endl;
}