// Rotate An Array

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are given a number k.
// 4. Rotate the array a, k times to the right (for positive values of k), and to
// the left for negative values of k.

// n=5
// 1
// 2
// 3
// 4
// 5
// k=3

// 3 4 5 1 2


#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int *a = new int[n];
    int i, j;

    for(i = 0; i < n; i++) 
        cin >> a[i] ;

    cin >> k;
    k = (k%n+n)%n;
    
    i = 0, j = n-1;
    while(i<=j) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++, j--;
    }

    i=0, j=k-1;
    while(i<=j) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++, j--;
    }

    i=k, j=n-1;
    while(i<=j) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++, j--;
    }
    for(i=0; i<n;i++) {
        cout << a[i] << " ";
    }
}