// Sort 012

// 1. You are given an array(arr) containing only 0's, 1's, and 2's.
// 2. You have to sort the given array in increasing order and in linear time.

// n=10
// 1
// 0
// 2
// 2
// 1
// 0
// 2
// 1
// 0
// 2

// Swapping index 1 and index 0
// Swapping index 2 and index 9
// Swapping index 2 and index 8
// Swapping index 2 and index 1
// Swapping index 3 and index 7
// Swapping index 5 and index 2
// Swapping index 6 and index 6
// 0
// 0
// 0
// 1
// 1
// 1
// 2
// 2
// 2
// 2


#include<iostream>
#include<vector>

using namespace std;

void swap(vector<int> &arr, int i, int j) {
    cout << ("Swapping index " + to_string(i) + " and index " + to_string(j)) << endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void sort_012(vector<int> &arr, int n){
    int i=0, j=0, k=arr.size()-1;
    while(i<=k){
        if(arr[i] == 0){
            swap(arr, i, j);
            i++;
            j++;
        } else if(arr[i] == 1){
            i++;
        } else{
            swap(arr, i, k);
            k--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort_012(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
    
    return 0;
}