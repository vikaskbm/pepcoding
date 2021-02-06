// Span Of Array

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.

// n=6
// 15
// 30
// 40
// 4
// 11
// 9

// 36


#include <iostream>
using namespace std;

int array_min(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int array_max(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int array_span(int arr[], int n) {
    int min = array_min(arr, n);
    int max = array_max(arr, n);

    return max - min;
} 

int main() {
    int n;
    cin >> n;
    int arr[n] {};
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    int span = array_span(arr, n);
    cout << span <<endl;
}