// Sort 01

// 1. You are given an array(arr) containing only 0's and 1's.
// 2. You have to sort the given array in increasing order and in linear time.

// n=5
// 0
// 1
// 0
// 1
// 0

// Swapping index 0 and index 0
// Swapping index 2 and index 1
// Swapping index 4 and index 2
// 0
// 0
// 0
// 1
// 1


#include<iostream>
#include<vector>

using namespace std;


void swap(vector<int> &arr, int i, int j){
    cout << "Swapping index " + to_string(i) + " and index " + to_string(j) << endl;
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void sort_01(vector<int> &arr, int n){
    int idx=0;
    for(int i=0; i<n; i++){
        if(arr[i]<1){
            swap(arr, i, idx);
            idx++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)  
        cin >> arr[i];

    sort_01(arr, n);

    for(int i=0; i<n; i++)  
        cout << arr[i] << endl;
}