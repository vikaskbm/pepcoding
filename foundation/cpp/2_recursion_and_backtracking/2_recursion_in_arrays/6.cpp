// All Indices Of Array

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are given a number x. 
// 4. You are required to find the all indices at which x occurs in array a.
// 5. Return an array of appropriate size which contains all indices at which x occurs in array a.

// n=6
// 15
// 11
// 40
// 4
// 4
// 9

// x=4

// 3
// 4


#include<iostream>

void all_indices(int arr[], int n, int x, int i) {
    if(i==n)
        return;
        
    if(arr[i]==x){
        std::cout<<i<<std::endl; 
    }
    all_indices(arr, n, x, ++i);
}

int main() {
    int n, x;
    std::cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        std::cin>>arr[i];
    std::cin >> x;
    
    all_indices(arr, n, x, 0);
}