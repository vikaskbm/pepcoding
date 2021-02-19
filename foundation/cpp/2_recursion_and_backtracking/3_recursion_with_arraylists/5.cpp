// Get Maze Path With Jumps

// 1. You are given a number n and a number m representing number of rows and columns in a maze.
// 2. You are standing in the top-left corner and have to reach the bottom-right corner. 
// 3. In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..). 
// 4. Complete the body of getMazePath function - without changing signature - to get the list of all paths that can be used to move from top-left to bottom-right.
// Use sample input and output to take idea about output.

// n=2
// m=2

// [h1v1, v1h1, d1]


#include<iostream>
#include<vector>

using namespace std;

vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if(sr == dr && sc == dc) {
        vector<string> res {};
        res.push_back("");
        return res;
    }
    vector<string> res {};

    if(sc!=dc){
        for(int i=1; i<=dc-sc; i++){
            vector<string> t = getMazePaths(sr, sc+i, dr, dc);
            for(int j=0; j<t.size(); j++)
                res.push_back("h" + to_string(i) + t[j]);
        }
    }

    if(sr!=dr){
        for(int i=1; i<=dr-sr; i++){
            vector<string> t = getMazePaths(sr+i, sc, dr, dc);
            for(int j=0; j<t.size(); j++)
                res.push_back("v" + to_string(i) + t[j]);
        }
    }

    if(sr!=dr && sc!=dc){
        for(int i=1; i<=dc; i++){
            vector<string> t = getMazePaths(sr+i, sc+1, dr, dc);
            for(int j=0; j<t.size(); j++)
                res.push_back("d" + to_string(i) + t[j]);
        }
    }

    return res;
}

void display(vector < string > & arr) {
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }

    cout << "]" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector < string > ans = getMazePaths(0, 0, n - 1, m - 1);
    display(ans);
    return 0;
}