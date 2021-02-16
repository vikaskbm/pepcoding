// Display Array

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to print the elements of array from beginning to end each in a separate line.
// 4. For the above purpose complete the body of displayArr function. Don't change the signature.

// n=5
// 3
// 1
// 0
// 7
// 5

// 3
// 1
// 0
// 7
// 5


#include<iostream>

void display_recursive(int arr[], int i, int n) {
    if(i==n)
        return;
    std::cout<<arr[i]<<std::endl;
    display_recursive(arr, i+1, n);
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        std::cin>>arr[i];
    
    display_recursive(arr, 0, n);
}