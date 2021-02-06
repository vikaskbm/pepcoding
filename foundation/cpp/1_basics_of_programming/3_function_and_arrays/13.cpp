// Reverse An Array

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to reverse the contents of array a.

// n=5
// 1
// 2
// 3
// 4
// 5

// 5 4 3 2 1


#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    
    int i = 0, j= n-1;
    while(i<=j){
        int t = a[i];
        a[i]=a[j];
        a[j]=t;
        i++, j--;
    }
    
    for(i=0;i<n;i++)
        cout << a[i] << " ";
}