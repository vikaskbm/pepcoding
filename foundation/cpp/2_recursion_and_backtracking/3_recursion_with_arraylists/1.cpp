// Get Subsequence

// 1. You are given a string str.
// 2. Complete the body of getSS function - without changing signature - to calculate all subsequences of str.
// Use sample input and output to take idea about subsequences.

// abc

// [, c, b, bc, a, ac, ab, abc]


#include <iostream>
#include <vector>

using namespace std;

vector <string> gss(string s) {
    if(s.size() == 0){
        vector<string> res {};
        res.push_back("");
        return res;
    }
    char c = s.front();
    string ss = s.substr(1);
    vector <string> t = gss(ss);

    vector <string> res {};
    for(auto x: t){
        res.push_back(x);
        res.push_back(c+x);
    }
    return res;
    
}

int main() {
    string s;
    cin >> s;
    vector < string > ans = gss(s);
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