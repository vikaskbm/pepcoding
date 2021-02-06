// Inverse Of An Array

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to calculate the inverse of array a.

// n=5
// 4
// 0
// 2
// 3
// 1

// 1
// 4
// 2
// 3
// 0


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, i;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
        cin >> a[i];
        
    vector <int> res(n);
    for(i=0;i<n;i++)
        res[a[i]] = i;
    
    for(i=0;i<n;i++)
        cout<<res[i]<<endl;
        
}