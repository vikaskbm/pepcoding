// Target Sum Pair 1

// 1. You are given an array(arr) of distinct integers and a target.
// 2. You have to print all the pairs having their sum equal to the target.

// n=12
// 9 
// -48 
// 100 
// 43 
// 84 
// 74 
// 86 
// 34 
// -37 
// 60 
// -29 
// 44
// target=160

// 60, 100
// 74, 86


#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


void print_target_sum(vector<int> arr, int tar) {
    int l=0;
    int h=arr.size()-1;

    while(l<h){
        if(arr[l] + arr[h] > tar){
            h--;
        } else if(arr[l] + arr[h] < tar){
            l++;
        } else{
            cout << arr[l] << ", " << arr[h] << endl;
            l++;
            h--;
        }
    }
}

int main() {
    int n, tar;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    cin >> tar;

    sort(arr.begin(), arr.end());
    print_target_sum(arr, tar);

}