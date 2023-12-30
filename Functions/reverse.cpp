//Write a function to reverse a string
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str; 
    reverse(str.begin(), str.end());
    cout<<"Reverse is: "<<str;
    
    return 0;
}

