// Broken Economy

// In a country, 5 given denominations are as follows
// [7, 14, 18, 25, 30]
// The foreigner asks for the denomination of 18.
// The money exchange tells them a denomination of 18 is available.  
// You are required to print the values told by the money exchange to the foreigner.

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of the array a.
// 3. You are given another number d.
// 4. You are required to find the ceil and floor of d in array a.

// n=10
// 1
// 5
// 10
// 15
// 22
// 33
// 40
// 42
// 55
// 66
// d=34

// 40
// 33


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int l {}, h{},d, n;
    cin>>n;
    vector <int> arr(n);
    for(int i = 0; i< n; i++)
        cin >> arr[i];

    cin >> d;
    int i=0;
    while(arr[i]<=d){
            l = arr[i];        
            i++;
    }

    i = n-1;
    while(arr[i]>=d){
            h = arr[i];        
            i--;
    }

    if(l==h)
        cout << h << endl;
    else
        cout << h <<" "<< l <<endl;
}