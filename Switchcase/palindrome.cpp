//Write a program to check if a given string is a palindrome.
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    int n=s.length();
     for (int i = 0; i < n / 2; i++) {
        if (s[i] == s[n - 1 - i]) {
            return true;
        }
        else{
            return false;
        }
        }
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    if(palindrome(s)){
        cout<<"It is a Palindrome."<<endl;
    }
    else{
        cout<<"It is not a palindrome."<<endl;
    }
   return 0;
}
