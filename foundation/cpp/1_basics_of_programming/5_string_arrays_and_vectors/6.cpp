// Remove Primes

// 1. You are given an ArrayList of positive integers.
// 2. You have to remove prime numbers from the given ArrayList and return the updated ArrayList.

// Note -> The order of elements should remain same.

// n=4
// 3 12 13 15

// [12, 15]


#include<iostream>
#include<vector>

using namespace std;

bool is_prime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0)
            return false;
    }
    return true;

}

int main() {
    int n;
    cin>>n;
    vector<int> num;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    vector<int> res;
    for(int i=0; i<n; i++){
        if(!is_prime(num[i]))
            res.push_back(num[i]);
    }

    if (res.size()==0)
        return 0;
    cout<<"["<<res[0];
    for(int i=1; i<res.size(); i++){
        cout<<", "<<res[i];
    }
    cout<<"]"<<endl;
    
}