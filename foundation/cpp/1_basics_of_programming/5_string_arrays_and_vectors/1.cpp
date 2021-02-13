// Print All Palindromic Substrings

// 1. You are given a string. 
// 2. You have to print all palindromic substrings of the given string.

// abcc

// a
// b
// c
// cc
// c


#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool is_palindrome(string t,int i,int j){
    while(i<=j){
        if(t[i]!=t[j])
            return false;
            
        i++,j--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        for(int j=1; j <= s.length()-i; j++) {
            string t = s.substr(i, j);
            if(is_palindrome(t, 0, j-1))
                cout<<t<<endl;
        }
    }
}