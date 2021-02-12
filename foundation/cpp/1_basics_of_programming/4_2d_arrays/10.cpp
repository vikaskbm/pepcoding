// Search In A Sorted 2d Array

// 1. You are given a number n, representing the number of rows and columns of a square matrix.
// 2. You are given n * n numbers, representing elements of 2d array a. 
// Note - Each row and column is sorted in increasing order.
// 3. You are given a number x.
// 4. You are required to find x in the matrix and print it's location int (row, col) format as discussed in output format below.
// 5. In case element is not found, print "Not Found".

// n=4
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24
// 31
// 32
// 33
// 34
// 41
// 42
// 43
// 44

// x=43

// 3
// 2


#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int> (n, 0));

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>> a[i][j];
    
    int x;
    cin>>x;
    int i=0, j=n-1;
    while(i<=j){
        if(x>a[i][j]){
            i++;
        } else{
            int li=0, ri=j;
            while(li<=ri){
                int m=(li+ri)/2;
                if(x==a[i][m]){
                    cout << i <<"
"<< m <<endl;
                    return 0;
                } else if(x>a[i][m]){
                    li = m+1;
                } else{
                    ri = m-1;
                }
            }
            cout<< "Not Found" <<endl;
            return 0;
        }
    }
}