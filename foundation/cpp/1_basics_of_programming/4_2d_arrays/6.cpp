// Rotate By 90 Degree

// 1. You are given a number n, representing the number of rows and number of columns.
// 2. You are given n*n numbers, representing elements of 2d array a.
// 3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
// *Note - you are required to do it in-place i.e. no extra space should be used to achieve it .*

// n=4
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24
// 31
// 32
// 33
// 34
// 41
// 42
// 43
// 44

// 41 31 21 11
// 42 32 22 12
// 43 33 23 13
// 44 34 24 14


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>a[i][j];

    
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2; j++) {
            int t = a[i][j];
            a[i][j] = a[i][n-1-j];
            a[i][n-1-j] = t;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++)
            cout<<a[i][j] <<" ";
        cout<<endl;
    }
}