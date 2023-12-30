//Write a program to read a string from the user and print its length.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin,s);
    cout<<"The length of string is: "<<s.length()<<endl;
return 0;
}