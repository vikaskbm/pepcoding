// Pythagorean Triplet

// 1. You are required to check if a given set of numbers is a valid pythagorean triplet.
// 2. Take as input three numbers a, b and c.
// 3. Print true if they can form a pythagorean triplet and false otherwise.

#include <iostream>
using namespace std;

void is_triplet(int a, int b, int c) {
    bool is_pythagorean_triplet = false;
    int A=a*a, B=b*b, C=c*c;
    
    if (A == (B + C)) is_pythagorean_triplet = true; 
    
    if (B == (A + C)) is_pythagorean_triplet = true;

    if (C == (A + B)) is_pythagorean_triplet = true;

    if (is_pythagorean_triplet) cout << "true" << endl;
    else cout << "false" << endl;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    is_triplet(a, b, c);
}