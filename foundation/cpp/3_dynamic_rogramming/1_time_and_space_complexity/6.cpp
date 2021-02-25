// Partition An Array

// 1. You are given an array(arr) of integers and a pivot.
// 2. You have to re-arrange the given array in such a way that all elements smaller or equal to pivot lie on the left side of pivot and all elements greater than pivot lie on its right side.
// 3. You have to achieve this in linear time.

// n=5
// 7 
// -2 
// 4 
// 1 
// 3
// p=3

// Swapping -2 and 7
// Swapping 1 and 7
// Swapping 3 and 4
// -2 1 3 7 4 


#include<iostream>
#include<vector>

using namespace std;


bool is_smaller(vector<int> &arr, int i, int p) {
    return arr[i]<=p;
}

void swap(vector<int> &arr, int i, int j) {
    cout << "Swapping " + to_string(arr[i]) + " and " + to_string(arr[j]) << endl;
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}

void partition(vector<int> &arr, int p) {
    int j=0;
    for(int i=0; i<arr.size(); i++){
        if(is_smaller(arr, i, p)){
            swap(arr, i, j);
            j++;
        }

    }    
}

int main() {
    int n, p;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin >> p;

    partition(arr, p);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}