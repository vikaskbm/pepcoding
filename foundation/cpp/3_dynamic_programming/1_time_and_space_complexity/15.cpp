// Pivot In Sorted And Rotated Array

// 1. You are given an array(arr) of distinct integers, which is sorted and rotated around an unknown point.
// 2. You have to find the smallest element in O(logN) time-complexity

// n=9
// 15
// 16
// 19
// 21
// 23
// 24
// 1
// 2
// 12

// 1


#include<iostream>
#include<vector>

using namespace std;

void smallest_in_rotated_arr(vector<int> arr, int l, int r){
    
    while(l<r){
        int m = (l+r)/2;
        if(arr[m] < arr[r]){
            r=m;
        } else {
            l=m+1;
        }
    }
    cout << arr[r];
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    smallest_in_rotated_arr(arr, 0, n-1);
}