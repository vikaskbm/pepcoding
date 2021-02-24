// Merge Two Sorted Arrays

// 1. You are given two sorted arrays(a,b) of integers.
// 2. You have to merge them and form one sorted array.
// 3. You have to do it in linear time complexity.

// n=4
// -2 
// 5 
// 9 
// 11
// m=3
// 4 
// 6 
// 8

// -2
// 4
// 5
// 6
// 8
// 9
// 11


#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeTwoSortedArrays(vector<int> &A, vector<int> &B)
{
    vector<int> arr {};
    int i=0, j=0;
    while (i<A.size() && j<B.size()){
        if(A[i] < B[j]){
            arr.push_back(A[i]);
            i++;
        } else{
            arr.push_back(B[j]);
            j++;
        }
    }
    while (i<A.size()){
        arr.push_back(A[i]);
        i++;
    }
    while (j<B.size()){
        arr.push_back(B[j]);
        j++;
    }
    return arr;
}

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void output(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> A(n, 0);
    input(A);

    cin >> m;
    vector<int> B(m, 0);
    input(B);

    vector<int> ans = mergeTwoSortedArrays(A, B);
    output(ans);
    return 0;
}