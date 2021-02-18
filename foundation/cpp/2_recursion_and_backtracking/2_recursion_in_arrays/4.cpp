// First Index

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are given a number x. 
// 4. You are required to find the first index at which x occurs in array a.
// 5. If x exists in array, print the first index where it is found otherwise print -1.

// n=6
// 15
// 11
// 40
// 4
// 4
// 9
// x=4

// 3


#include<iostream>

void first_index(int arr[], int n, int x, int i) {
    if(i==n){
        std::cout<<-1<<std::endl;
        return;
    }
    if(arr[i]==x){
        std::cout<<i<<std::endl;
        return;
    }
    first_index(arr, n, x, ++i);
}

int main() {
    int n, x;
    std::cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        std::cin>>arr[i];
    std::cin >> x;
    
    first_index(arr, n, x, 0);
}