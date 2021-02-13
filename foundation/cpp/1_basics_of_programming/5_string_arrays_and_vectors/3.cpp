// Toggle Case

// 1. You are given a string that contains only lowercase and uppercase alphabets. 
// 2. You have to toggle the case of every character of the given string.

// pepCODinG

// PEPcodINg


#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    for(int i=0; i<str.length(); i++){
        if(isupper(str[i]))
            str[i]=tolower(str[i]);
        else
            str[i]=toupper(str[i]);

    }
    cout<<str<<endl;
}