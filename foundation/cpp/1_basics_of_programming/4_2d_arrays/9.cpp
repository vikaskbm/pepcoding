// Saddle Price

// 1. You are given a square matrix of size 'n'. You are given n*n elements of the square matrix. 
// 2. You are required to find the saddle price of the given matrix and print the saddle price. 
// 3. The saddle price is defined as the least price in the row but the maximum price in the column of the matrix.

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

// 41


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int> (n, 0));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>> a[i][j];
    
    for(int i=0; i<n; i++){
        int idx=0;
        for(int j=1;j<n;j++){
            if(a[i][idx]>a[i][j])
                idx=j;
        }

        bool saddle=true;
        for(int j=0; j<n; j++){
            if(a[i][idx]<a[j][idx]){
                saddle=false;
                break;
            }
        }
        if(saddle){
            cout<<a[i][idx] <<endl;
            return 0;
        } 
    }
    cout<< "Invalid input" <<endl;
}