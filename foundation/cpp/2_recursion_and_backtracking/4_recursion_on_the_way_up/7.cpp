// Print Encodings

// 1. You are given a string str of digits. (will never start with a 0)
// 2. You are required to encode the str as per following rules
//     1 -> a
//     2 -> b
//     3 -> c
//     ..
//     25 -> y
//     26 -> z
// 3. Complete the body of printEncodings function - without changing signature - to calculate and print all encodings of str.
// Use the input-output below to get more understanding on what is required
// 123 -> abc, aw, lc
// 993 -> iic
// 013 -> Invalid input. A string starting with 0 will not be passed.
// 103 -> jc
// 303 -> No output possible. But such a string maybe passed. In this case print nothing.


#include <iostream>
#include<string>
using namespace std;

char toChar(int a) {
	return char('0'+a+48);
}

void printEncoding(string str, string asf){
    if(str.size() == 0){
        cout << asf << endl;
        return;
    }
    if(str.at(0)=='0'){
        return;
    }
    int a = str[0]-'0';
    printEncoding(str.substr(1), asf + toChar(a));
    
    if(str.size() >= 2){
        a = str[1]-'0' + (str[0]-'0')*10;
        if(a<=26){
            printEncoding(str.substr(2), asf + toChar(a));
        }
    }
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
}