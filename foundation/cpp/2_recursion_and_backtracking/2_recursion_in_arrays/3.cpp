// Max Of An Array

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to find the maximum of input. 
// 4. For the purpose complete the body of maxOfArray function. Don't change the signature.

// n=6
// 15
// 30
// 40
// 4
// 11
// 9

// 40


#include<iostream>

void max_array(int arr[], int n, int i) {
    if(n==0)
        std::cout<<arr[i]<<std::endl;

    if(arr[i] < arr[n-1])
        i = n-1;
    max_array(arr, n-1, i);
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        std::cin>>arr[i];
    
    max_array(arr, n, n-1);
}