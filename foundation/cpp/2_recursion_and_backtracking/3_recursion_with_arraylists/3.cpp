// Get Stair Paths

// 1. You are given a number n representing number of stairs in a staircase.
// 2. You are standing at the bottom of staircase. You are allowed to climb 1 step, 2 steps or 3 steps in one move.
// 3. Complete the body of getStairPaths function - without changing signature - to get the list of all paths that can be used to climb the staircase up.

// n=3

// [111, 12, 21, 3]


#include <iostream>
#include <vector>

using namespace std;

vector <string> getStairPaths(int n) {
    if(n < 1){
        vector<string> res {};
        res.push_back("");
        return res;
    }
    
    vector <string> res {};
    for(int i=1; i<=3 && i<=n; i++){
        vector <string> t = getStairPaths(n-i);
        for(int j=0; j<t.size(); j++){
            res.push_back(to_string(i)+t[j]);
        }
    }

    return res;
}

int main() {
    int n;
    cin >> n;
    vector <string> ans = getStairPaths(n);
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