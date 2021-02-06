// Subarray Problem

// 1. You are given an array of size 'n' and n elements of the same array.
// 2. You are required to find and print all the subarrays of the given array. 
// 3. Each subarray should be space seperated and on a seperate lines. Refer to sample input and output.

// n=3
// 10
// 20
// 30

// 10	
// 10	20	
// 10	20	30	
// 20	
// 20	30	
// 30	


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int i,j,n;
    cin >> n;
    vector <int> a(n);
    for(i=0;i<n;i++)
        cin >> a[i];
    
    for(i=0;i<n;i++){
        string s = to_string(a[i]) + "	";
        cout << s << endl;
        for (j=i+1;j<n;j++) {
            s += to_string(a[j]) + "	";
            cout << s << endl;
        }
    }
}