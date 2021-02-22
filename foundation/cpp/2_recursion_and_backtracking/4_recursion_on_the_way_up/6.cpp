// Print Permutations

// 1. You are given a string str.
// 2. Complete the body of printPermutations function - without changing signature - to calculate and print all permutations of str.
// Use sample input and output to take idea about permutations.

// abc

// abc
// acb
// bac
// bca
// cab
// cba


#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    if(str.size()==0){
        cout<<asf<<endl;
        return;
    }
    for(int i=0; i<str.size(); i++){
        char c=str.at(i);
        string l=str.substr(0, i);
        string r=str.substr(i+1);    
        printPermutations(l+r, asf+c);
    }

}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}