// Quick Sort

// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using quick-sort.

// n=5
// 7 
// -2 
// 4 
// 1 
// 3

// pivot -> 3
// Swapping -2 and 7
// Swapping 1 and 7
// Swapping 3 and 4
// pivot index -> 2
// pivot -> 1
// Swapping -2 and -2
// Swapping 1 and 1
// pivot index -> 1
// pivot -> -2
// Swapping -2 and -2
// pivot index -> 0
// pivot -> 4
// Swapping 4 and 7
// pivot index -> 3
// pivot -> 7
// Swapping 7 and 7
// pivot index -> 4
// -2 1 3 4 7 


#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int> &arr, int i, int j){
    cout << "Swapping " + to_string(arr[i]) + " and " + to_string(arr[j]) << endl;
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

int partition(vector<int> &arr, int l, int r){
    int p = arr[r];
    cout << "pivot -> " + to_string(p)<< endl;
    int idx=l;
    for(int i=l; i<=r; i++){
        if(arr[i]<=p){
            swap(arr, i, idx);
            idx++;
        }
    }
    cout << "pivot index -> " + to_string(idx-1)<< endl;
    return idx-1;
}

void quick_sort(vector<int> &arr, int l, int r){
    if(l <= r){
        int p = partition(arr, l, r);
        quick_sort(arr, l, p-1);
        quick_sort(arr, p+1, r);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    quick_sort(arr, 0, n-1);

    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}