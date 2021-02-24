// Bubble Sort

// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using bubble sort.

// n=5
// 7 
// -2 
// 4 
// 1 
// 3

// Comparing -2 and 7
// Swapping -2 and 7
// Comparing 4 and 7
// Swapping 4 and 7
// Comparing 1 and 7
// Swapping 1 and 7
// Comparing 3 and 7
// Swapping 3 and 7
// Comparing 4 and -2
// Comparing 1 and 4
// Swapping 1 and 4
// Comparing 3 and 4
// Swapping 3 and 4
// Comparing 1 and -2
// Comparing 3 and 1
// Comparing 1 and -2
// -2
// 1
// 3
// 4
// 7


#include<iostream>
#include<vector>

using namespace std;


bool compare(vector<int> arr, int i, int j) {
    cout << "Comparing " + to_string(arr[i]) + " and " + to_string(arr[j]) << endl;
    if(arr[i]>arr[j])
        return true;
    return false;
}    

void swap(vector<int> &arr, int i, int j){
    cout << "Swapping " + to_string(arr[i]) + " and " + to_string(arr[j]) << endl;
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void bubble_sort(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i-1; j++){
            if(compare(arr, j+1, j)==true){
                swap(arr, j+1, j);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    bubble_sort(arr);

    for(int i=0; i<n; i++)
    cout << arr[i] << endl;
}