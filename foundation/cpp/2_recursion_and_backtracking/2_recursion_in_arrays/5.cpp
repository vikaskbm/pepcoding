// Last Index

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are given a number x. 
// 4. You are required to find the last index at which x occurs in array a.
// 5. If x exists in array, print the last index where it is found otherwise print -1.

// n=6
// 15
// 11
// 40
// 4
// 4
// 9
// x=4

// 4


#include<iostream>

void last_index(int arr[], int n, int x) {
    if(arr[n-1] == x){
        std::cout<<n-1<<std::endl;
        return;
    }
    last_index(arr, n-1, x);
}

int main() {
    int n, x;
    std::cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        std::cin>>arr[i];
    std::cin >> x;
    
    last_index(arr, n, x);
}