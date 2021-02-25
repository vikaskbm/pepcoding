// Count Sort

// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using count sort.

// n=5
// 7 
// -2 
// 4 
// 1 
// 3

// -2
// 1
// 3
// 4
// 7


#include<iostream>
#include<vector>
#include <limits.h>

using namespace std;

int MAX(int a, int b){
    if (a>b)
        return a;
    return b;
}

int MIN(int a, int b){
    if (a>=b)
        return b;
    return a;
}

void count_sort(vector <int> &arr, int min, int max){
    int range = max-min+1;
    vector<int> freq(range, 0);
    vector<int> res(arr.size(), 0);
    for(int i=0; i<arr.size(); i++){
        int idx = arr[i] - min;
        freq[idx]++;
    }

    for(int i=1; i<freq.size(); i++){
        freq[i] = freq[i] + freq[i-1]; 
    }

    for(int i=arr.size()-1; i>=0; i--){
        int val = arr[i];
        int pos = freq[val-min];
        int idx = pos-1;
        res[idx] = val;
        freq[val-min]--;
    }

    for(int i=0; i<res.size(); i++){
        cout << res[i] << endl;
    }

}

int main() {
    int n, max=INT_MIN, min=INT_MAX;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        max = MAX(max, arr[i]);
        min = MIN(min, arr[i]);
    }
    count_sort(arr, min, max);

}