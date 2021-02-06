// Bar Chart

// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing elements of array a.
// 3. You are required to print a bar chart representing value of arr a.

// n=5
// 3
// 1
// 0
// 7
// 5

//   			*		
//   			*		
//   			*	*	
//   			*	*	
//  *			*	*	
//  *			*	*	
//  *	*		*	*	


#include <iostream>
using namespace std;

int array_max(int arr[], int n) {
    int max = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}


void print_bar_chart(int arr[], int n) {
    int max = array_max(arr, n);

    for(int i = max; i > 0; i--){
        for(int j = 0; j < n; j++) {
            if(arr[j]>=i) cout << "*	";
            else cout << "	";
        }
        cout << endl;
    }
}

int main() {
    int n, x;
    cin >> n;
    int arr[n] {};
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
    
    print_bar_chart(arr, n);
    
}