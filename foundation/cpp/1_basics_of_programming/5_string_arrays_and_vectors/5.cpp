// Print All Permutations Of A String Iteratively

// 1. You are given a string. 
// 2. You have to print all permutations of the given string iteratively.

// abc

// abc
// bac
// cab
// acb
// bca
// cba


#include<iostream>
#include<string>

using namespace std;

int fact(int n) {
    int t=1;
    while(n>=1){
        t*=n;
        n--;
    }
    return t;
}

int main() {
    string str;
    getline(cin, str);
    int n = str.length();
    int f = fact(n);

    for(int i=0; i<f; i++){
        int temp=i;
        string s=str;
        for(int div=n; div>=1; div--){
            int r=temp%div;
            temp=temp/div;
            cout<<s[r];  
            s.erase(s.begin()+r);  
        }
        cout<<endl;
    }
}