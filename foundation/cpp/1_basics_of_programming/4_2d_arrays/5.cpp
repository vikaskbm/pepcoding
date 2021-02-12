// Exit Point Of A Matrix

// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers (1's and 0's), representing elements of 2d array a.
// 4. Consider this array a maze and a player enters from top-left corner in east direction.
// 5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
// 6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.

// n=4
// m=4
// 0
// 0
// 1
// 0
// 1
// 0
// 0
// 0
// 0
// 0
// 0
// 0
// 1
// 0
// 1
// 0

// 1
// 3


#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m, 0));
    for(int i=0; i<n; i++)
        for(int j=0; j<m ;j++)
            cin >> a[i][j];
            
    int d=0, i=0, j=0;
    while(true){
        d = (d+a[i][j])%4;
        
        if(d==0) {
            j++;
        } else if(d==1) {
            i++;
        } else if(d==2) {
            j--;
        } else {
            i--;
        }
        
        
        if(i<0) {
            i++;
            break;
        } else if(j<0) {
            j++;
            break;
        } else if(i==a.size()) {
            i--;
            break;
        } else if(j==a.size()){
            j--;
            break;
        }
    }
    cout << i << endl << j;
    
}