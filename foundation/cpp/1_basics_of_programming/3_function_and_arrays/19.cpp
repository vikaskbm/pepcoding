// First Index And Last Index

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.

// Asssumption - Array is sorted. Array may have duplicate values.

// n=15
// 1
// 5
// 10
// 15
// 22
// 33
// 33
// 33
// 33
// 33
// 40
// 42
// 55
// 66
// 77
// d=33

// 5
// 9


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int f {-1}, l{-1},d, n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i< n; i++)
        cin >> arr[i];

    cin >> d;
    int i=0;
    while(i<n){
        if(arr[i]==d){
            f = i;
            break;
        }
        i++;
    }
    
    i=n-1;
    while(i>-1){
        if(arr[i]==d){
            l = i;
            break;
        }
        i--;
    }
        
    cout << f <<" "<<l<<endl;
}