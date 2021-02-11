// Spiral Display

// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers, representing elements of 2d array a.
// 4. You are required to traverse and print the contents of the 2d array in form of a spiral.
// Note - Please check the sample output for details.

// n=3
// m=5
// 11
// 12
// 13
// 14
// 15
// 21
// 22
// 23
// 24
// 25
// 31
// 32
// 33
// 34
// 35

// 11
// 21
// 31
// 32
// 33
// 34
// 35
// 25
// 15
// 14
// 13
// 12
// 22
// 23
// 24


#include<iostream>
#include<vector>

using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m,0));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>a[i][j];
            
    int t=0, b=n-1, l=0, r=m-1;
    int c=0, tn=m*n;
    int i, j;
    while(c < tn){
        for(int i=t, j=l; i<=b && c < tn; i++){
            cout<< a[i][j]<< endl;
            c++;
        }
        l++;
        for(int i=b, j=l; j<=r && c < tn; j++){
            cout<< a[i][j] << endl;
            c++;
        }
        b--;
        for(int i=b, j=r; i>=t && c < tn; i--){
            cout << a[i][j] << endl;
            c++;
        }
        r--;
        for(int i=t, j=r; j>=l && c < tn; j--){
            cout << a[i][j] << endl;
            c++;
        }
        t++;
    }
    
}