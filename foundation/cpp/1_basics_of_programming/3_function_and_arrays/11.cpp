// Sum Of Two Arrays

// 1. You are given a number n1, representing the size of array a1.
// 2. You are given n1 numbers, representing elements of array a1.
// 3. You are given a number n2, representing the size of array a2.
// 4. You are given n2 numbers, representing elements of array a2.
// 5. The two arrays represent digits of two numbers.
// 6. You are required to add the numbers represented by two arrays and print the
// arrays.

// n1=5
// 3
// 1
// 0
// 7
// 5

// n2=6
// 1
// 1
// 1
// 1
// 1
// 1

// 1
// 4
// 2
// 1
// 8
// 6


#include <iostream>
#include <vector>
using namespace std;

vector<int> sum_array(vector <int> arr1, vector <int> arr2) {
    vector <int> res {};
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int c = 0;

    while(c > 0 || i >= 0 || j >= 0) {
        int a1 = i<0? 0: arr1[i];
        int a2 = j<0? 0: arr2[j];
        int t = c + a1 + a2;
        c = t / 10;
        t = t % 10;
        res.push_back(t);
        i--;
        j--;
    }
    i = 0;
    j = res.size() - 1;
    while(i <= j) {
        int temp = res[i];
        res[i] = res[j];
        res[j] = temp;
        i++;
        j--;
    }

    return res;
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

    vector <int> sum_arr = sum_array(arr1, arr2);
    
    for(int a:sum_arr)
        cout << a << endl;
}