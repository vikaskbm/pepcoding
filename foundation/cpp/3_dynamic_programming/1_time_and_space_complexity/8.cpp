// Quick Select

// 1. You are given an array(arr) of integers.
// 2. You have to find the k-th smallest element in the given array using the quick-select algorithm.

// n=5
// 7 
// -2 
// 4 
// 1 
// 3
// k=3

// pivot -> 3
// Swapping -2 and 7
// Swapping 1 and 7
// Swapping 3 and 4
// pivot index -> 2
// 3


#include<iostream>
#include<vector>

using namespace std;

void swap(vector <int> &arr, int i, int j){
    cout << "Swapping " +  to_string(arr[i]) + " and " + to_string(arr[j]) << endl;
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

int partition(vector<int> &arr, int l, int r){
    int idx = l;
    int p = arr[r];
    cout << "pivot -> " + to_string(p) << endl;
    for(int i=l; i<=r; i++){
        if(arr[i] <= p){
            swap(arr, i, idx);
            idx++;
        }
    }
    cout << "pivot index -> " + to_string(idx-1) << endl;
    return idx-1;
}

void quick_select(vector<int> &arr, int k, int l, int r){
    int p = partition(arr, l, r);
    while(p!=k-1){
        if(p>k-1){
            l=l;
            r=p-1;
        } else {
            l=p+1;
            r=r;
        }
        p=partition(arr, l, r);
    }
    cout << arr[p] << endl;
}


int main() {
    int n, k;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cin >> k;
    quick_select(arr, k, 0, n-1);    
}