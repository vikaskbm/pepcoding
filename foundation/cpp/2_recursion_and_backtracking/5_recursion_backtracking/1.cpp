// Flood Fill

// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a. The numbers can be 1 or 0 only.
// 4. You are standing in the top-left corner and have to reach the bottom-right corner. 
// Only four moves are allowed 't' (1-step up), 'l' (1-step left), 'd' (1-step down) 'r' (1-step right). You can only move to cells which have 0 value in them. You can't move out of the boundaries or in the cells which have value 1 in them (1 means obstacle)
// 5. Complete the body of floodfill function - without changing signature - to print all paths that can be used to move from top-left to bottom-right.

// n=3 
// m=3
// 0 0 0
// 1 0 1
// 0 0 0

// rddr


#include<iostream>
#include<vector>

using namespace std;

void floodfill(vector<vector<int>> arr, int r, int c, string psf, vector<vector<bool>> visited) {
    if(r < 0 || c < 0 || r == arr.size() || c == arr[0].size() || arr[r][c] == 1 || visited[r][c] == true) {
        return;
    }

    if(r == arr.size()-1 && c == arr[0].size()-1){
        cout << psf << endl;
        return;
    }
    visited[r][c] = true;
    floodfill(arr, r-1, c, psf+"t", visited);
    floodfill(arr, r, c-1, psf+"l", visited);
    floodfill(arr, r+1, c, psf+"d", visited);
    floodfill(arr, r, c+1, psf+"r", visited);
    visited[r][c] = false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>arr(n, vector <int> (m));
    vector<vector<bool>>visited(n, vector <bool> (m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    floodfill(arr, 0, 0, "", visited);
}