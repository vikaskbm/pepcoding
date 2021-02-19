// Get Kpc

// 1. You are given a string str. The string str will contains numbers only, where each number stands for a key pressed on a mobile phone.
// 2. The following list is the key to characters map :
//     0 -> .;
//     1 -> abc
//     2 -> def
//     3 -> ghi
//     4 -> jkl
//     5 -> mno
//     6 -> pqrs
//     7 -> tu
//     8 -> vwx
//     9 -> yz
// 3. Complete the body of getKPC function - without changing signature - to get the list of all words that could be produced by the keys in str.
// Use sample input and output to take idea about output.

// 78

// [tv, tw, tx, uv, uw, ux]


#include<iostream>
#include <vector>

using namespace std;

vector <string> getKPC(string s) {
    if(s.size() == 0){
        vector<string> res {};
        res.push_back("");
        return res;
    }
    
    vector <string> key {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    
    int k = int(s[0]) - 48;
    string f = key[k];
    string l = s.substr(1);
    
    vector <string> res {}; 
    for(int i=0; i<f.size(); i++){
        vector <string> t = getKPC(l);
        for(int j=0; j<t.size(); j++){
            res.push_back(f[i] + t[j]);
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    vector <string> ans = getKPC(s);
    int cnt = 0;

    cout << '[';
    for (string str: ans) {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}