// Difference Of Two Arrays

// 1. You are given a number n1, representing the size of array a1.
// 2. You are given n1 numbers, representing elements of array a1.
// 3. You are given a number n2, representing the size of array a2.
// 4. You are given n2 numbers, representing elements of array a2.
// 5. The two arrays represent digits of two numbers.
// 6. You are required to find the difference of two numbers represented by two arrays and print the arrays. a2 - a1

// Assumption - number represented by a2 is greater.

// n1=3
// 2
// 6
// 7

// n2=4
// 1
// 0
// 0
// 0

// 7
// 3
// 3


#include<iostream>
#include<vector>
using namespace std;

void difference_array(vector <int> &arr1, vector <int> &arr2, int m, int n) {
    int i = m-1, j=n-1, k=n-1;
    int c = 0;
    
    vector <int> res(n);

    while (k >= 0) {
        int a1 = i < 0? 0: arr1[i];
        int a2 = arr2[j];
        int t = 0;
        if(a2+c >= a1) {
            t = a2 + c - a1;
            c = 0;
        } else {
            t = a2 + c + 10 - a1;
            c = -1;
        }
        res[k] = t;
        k--, j--, i--;
    }
    while(res[k]==0)
        k++;
    for(;k<n;k++)
        cout << res[k] << endl;
}

int main() {
    int n1, n2, x;
    vector <int> arr1, arr2;

    cin >> n1;
    for(int i = 0; i < n1; i++) {
        cin >> x;
        arr1.push_back(x);
    }

    cin >> n2;
    for(int i = 0; i < n2; i++) {
        cin >> x;
        arr2.push_back(x);
    }
    
    difference_array(arr1, arr2, n1, n2);
}