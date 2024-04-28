//Write a program to print the ASCII value of a character.
#include<bits/stdc++.h>
using namespace std;
int ascii(char ch){
    return int(ch);
}
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    cout << "The ASCII value of  "<< ch << " is " << int(ch) <<endl;

   
return 0;
}
