// Radix Sort

// 1. You are given an array(arr) of integers.
// 2. You have to sort the given array in increasing order using radix sort.

// n=5
// 7 
// 2 
// 4 
// 1 
// 3

// After sorting on 1 place -> 1 2 3 4 7 
// 1 2 3 4 7 


#include<iostream>
#include<vector>

using namespace std;

void count_sort(vector<int> &arr, int exp){
    vector<int> freq(10, 0);
    for(int i=0; i<arr.size(); i++){
        freq[(arr[i]/exp)%10]++;
    }

    for(int i=1; i<freq.size(); i++){
        freq[i] += freq[i-1];
    }

    vector<int> res(arr.size());
    for(int i=arr.size()-1; i>=0; i--){
        int pos = freq[(arr[i]/exp)%10] - 1;
        res[pos] = arr[i];
        freq[arr[i]/exp % 10]--;
    }

    for(int i=0; i<arr.size(); i++)
        arr[i]=res[i];
    
    cout << "After sorting on " + to_string(exp) + " place -> ";
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

void radix_sort(vector<int> &arr){
    int max = arr[0];
    for(auto x: arr){
        if (x>=max)
            max = x;
    }
    int exp=1;
    while(exp <= max){
        count_sort(arr, exp);
        exp*=10;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    radix_sort(arr);
    
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
        
}