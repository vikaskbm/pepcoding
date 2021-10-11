// GRADING SYSTEM
// 1. You are given as input marks of a student.
// 2. Display an appropriate message based on the following rules:
//   	  2.1 for marks above 90, print excellent.
//   	  2.2 for marks above 80 and less than equal to 90, print good.
//   	  2.3 for marks above 70 and less than equal to 80, print fair.
//   	  2.4 for marks above 60 and less than equal to 70, print meets expectations.
//   	  2.5 for marks less than equal to 60, print below par.

#include<iostream>
using namespace std;

void print_grade(int num) {
    if (num > 90) cout << "excellent" << endl;
    else if (num > 80) cout << "good" << endl;
    else if (num > 70) cout << "fair" << endl;
    else if (num > 60) cout << "meets expectations" << endl;
    else cout << "below par" << endl;
}


int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    print_grade(marks);
    return 0;   
}