//Write a program to print the reverse of a string
#include<bits/stdc++.h>
using namespace std;
string rev(string str){
   reverse(str.begin(),str.end());
   return str;
}
int main(){
   string str;
    cout<<"Enter string: ";
    getline(cin,str);
    rev(str);
    cout<<"The reverse of string is: "<<rev(str)<<endl;
return 0;
}
