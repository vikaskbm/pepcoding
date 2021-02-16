// Display Array In Reverse

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to print the elements of array from end to beginning each in a separate line.
// 4. For the above purpose complete the body of displayArrReverse function. Don't change the signature.

// n=5
// 3
// 1
// 0
// 7
// 5

// 5
// 7
// 0
// 1
// 3


#include<iostream>

void display(int arr[], int n) {
    if(n==0)
        return;
    std::cout<<arr[n-1]<<std::endl;
    display(arr, n-1);
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        std::cin>>arr[i];
    
    display(arr, n);
}