// Find Element In An Array

// 1.You are given a number n, representing the size of array a.
// 2.You are given n numbers, representing elements of array a.
// 3. You are given another number d.
// 4. You are required to check if d number exists in the array a and at what index (0 based). If found print the index, otherwise print -1.

// n=6
// 15
// 30
// 40
// 4
// 11
// 9

// d=40

// 2


#include <iostream>
using namespace std;

int array_search(int arr[], int n, int x) {
    int idx = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            idx = i;
            break;
        }
    }

    return idx;
}

int main() {
    int n, x;
    cin >> n;
    int arr[n] {};
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    
    cin >> x;

    int idx = array_search(arr, n, x);
    cout << idx <<endl;
}