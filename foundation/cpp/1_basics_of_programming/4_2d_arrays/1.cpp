// 2d Arrays Demo

// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to display the contents of 2d array as suggested by output format below.

// n=2
// m=4
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24

// 11 12 13 14
// 21 22 23 24


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    vector <vector<int>> a(n, vector<int> (m));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout << a[i][j] << " ";
        
        cout << endl;
    }
}