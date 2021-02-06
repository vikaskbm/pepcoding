// Subsets Of Array

// 1. You are given a number n, representing the count of elements.
// 2. You are given n numbers.
// 3. You are required to print all subsets of arr. Each subset should be
// on separate line. For more clarity check out sample input and output.

// n=3
// 10
// 20
// 30

// -	-	-	
// -	-	30	
// -	20	-	
// -	20	30	
// 10	-	-	
// 10	-	30	
// 10	20	-	
// 10	20	30	


#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i = 0; i< n; i++)
        cin >> a[i];
    
    int l = pow(2, n);
    for(int i=0;i<l;i++) {
        int t = i;
        string s;
        for(int j=a.size()-1;j>=0;j--) {
            int r = t%2;
            t = t/2;
            if(r==0) {
                s = "-	" + s;
            } else {
                s = to_string(a[j]) + "	" + s;
            }
        }
        cout << s << endl;
    }
}