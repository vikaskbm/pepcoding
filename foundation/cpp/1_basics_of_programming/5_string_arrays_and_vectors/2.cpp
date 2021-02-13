// String Compression

// 1. You are given a string. 
// 2. You have to compress the given string in the following two ways - 
//    First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
//    For "aaabbccdee", the compressed string will be "abcde".
//    Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
//    For "aaabbccdee", the compressed string will be "a3b2c2de2".

// wwwwaaadexxxxxx

// wadex
// w4a3dex6

#include<iostream>
#include<string>
using namespace std;

void string_compression(string str, int len) {
    string s;
    s=str[0];
    for(int i=1; i<len; i++){
        char p=str[i-1];
        char c=str[i];
        if(c!=p)
            s+=c;
    }
    cout<<s<<endl;
}

void string_compression2(string str, int len) {
    string s;
    s=str[0];
    int cnt=1;
    for(int i=1; i<len; i++){
        char p=str[i-1];
        char c=str[i];
        if(c!=p){
            if(cnt!=1){
                s+=to_string(cnt);
                cnt=1;
            }
            s+=c;
        } else
            cnt++;
    }
    if(cnt>1)
        s+=to_string(cnt);
        
    cout<<s<<endl;
}

int main() {
    string str;
    getline(cin, str);
    string_compression(str,str.length());
    string_compression2(str,str.length());
}