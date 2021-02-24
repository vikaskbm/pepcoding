// Insertion Sort

// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using insertion sort.

// n=5
// 7 
// -2 
// 4 
// 1 
// 3

// Comparing -2 and 7
// Swapping 7 and -2
// Comparing 4 and 7
// Swapping 7 and 4
// Comparing 4 and -2
// Comparing 1 and 7
// Swapping 7 and 1
// Comparing 1 and 4
// Swapping 4 and 1
// Comparing 1 and -2
// Comparing 3 and 7
// Swapping 7 and 3
// Comparing 3 and 4
// Swapping 4 and 3
// Comparing 3 and 1
// -2
// 1
// 3
// 4
// 7


#include<iostream>
#include<vector>

using namespace std;

bool compare(vector<int> &arr, int i, int j){
    cout << "Comparing " + to_string(arr[j]) + " and " + to_string(arr[i]) << endl;
    return (arr[i]>arr[j]);    
}

void swap(vector<int> &arr, int i, int j){
    cout << "Swapping " + to_string(arr[i]) + " and " + to_string(arr[j]) << endl;
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}

void insertion_sort(vector<int> &arr){
    for(int i=1; i<arr.size(); i++){
        for(int j=i-1; j>=0; j--){
            if(compare(arr, j, j+1))
                swap(arr, j, j+1);
            else 
                break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    insertion_sort(arr);

    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
}