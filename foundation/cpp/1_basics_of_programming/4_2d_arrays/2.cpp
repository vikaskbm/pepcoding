// Matrix Multiplication

// 1. You are given a number n1, representing the number of rows of 1st matrix.
// 2. You are given a number m1, representing the number of columns of 1st matrix.
// 3. You are given n1*m1 numbers, representing elements of 2d array a1.
// 4. You are given a number n2, representing the number of rows of 2nd matrix.
// 5. You are given a number m2, representing the number of columns of 2nd matrix.
// 6. You are given n2*m2 numbers, representing elements of 2d array a2.
// 7. If the two arrays representing two matrices of dimensions n1 * m1 and n2 * m2 can be multiplied, display the contents of prd array as specified in output Format.
// 8. If the two arrays can't be multiplied, print "Invalid input".

// n1=2
// m1=3
// 10
// 0
// 0
// 0
// 20
// 0

// n2=3
// m2=4
// 1
// 0
// 1
// 0
// 0
// 1
// 1
// 2
// 1
// 1
// 0
// 0

// 10 0 10 0
// 0 20 20 40


#include<iostream>
#include<vector>
using namespace std;

void matrix_multiplication(vector<vector<int>> a,int n1,int m1, vector<vector<int>> b,int n2,int m2)
{
    vector<vector<int>> c(n1, vector<int> (m2, 0));
    for(int i=0; i<n1; i++)
        for(int j=0; j<m2; j++)
            for(int k=0; k<n2; k++)
                c[i][j] += a[i][k] * b[k][j];

    for(int i=0; i<n1; i++){
        for(int j=0; j<m2; j++)
            cout<<c[i][j] << " ";
    
        cout<<endl;
    }
}

int main() {
    int n1, n2, m1, m2;
    cin>>n1>>m1;
    
    vector<vector<int>> a(n1, vector<int>(m1,0));
    for(int i=0; i<n1; i++)
        for(int j=0; j<m1; j++)
            cin>>a[i][j];
            
    cin>>n2>>m2;
    vector<vector<int>> b(n2, vector<int>(m2,0));
    for(int i=0; i<n2; i++)
        for(int j=0; j<m2; j++)
            cin>>b[i][j];

    if(n2 != m1){
        cout<<"Invalid input" << endl;
    } else{
        matrix_multiplication(a, n1, m1, b, n2, m2);
    }
    
}