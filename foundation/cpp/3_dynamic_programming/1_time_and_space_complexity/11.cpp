// Sort Dates

// 1. You are given an array(arr) of different dates in format DD-MM-YYYY.
// 2. You have to sort these dates in increasing order.

// n=5
// 12041996
// 20101996
// 05061997
// 12041989
// 11081987

// 11081987
// 12041989
// 12041996
// 20101996
// 05061997


#include <iostream>
#include <vector>

using namespace std;

void input(vector<string> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
}

void print(vector<string> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;
}

void count_sort(vector<string> &arr, int div, int mod, int range) {
    vector<int> freq(range, 0);
    for(int i=0; i<arr.size(); i++){
        freq[stoi(arr[i])/div%mod]++;
    }

    for(int i=1; i<freq.size(); i++)
        freq[i] += freq[i-1];

    vector<string> res(arr.size());
    for(int i=arr.size()-1; i>=0; i--){
        int pos = freq[stoi(arr[i])/div%mod]-1;
        res[pos] = arr[i];
        freq[stoi(arr[i])/div%mod]--;
    }

    for(int i=0; i<arr.size(); i++){
        arr[i] = res[i];
    }
}


void sort_dates(vector<string> &arr) {
    count_sort(arr, 1000000, 100, 32);      // Days
    count_sort(arr, 10000, 100, 13);        // Months
    count_sort(arr, 1, 10000, 2501);        // Year
}

int main()
{
    int n;
    cin >> n;
    vector<string> A(n);
    input(A);

    sort_dates(A);

    print(A);
    return 0;
}