//Write a program to check if a character is a vowel or a consonant.
#include<bits/stdc++.h>
using namespace std;
char vowel(char ch){

     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
     {
         cout<<ch<<" is a vowel.";
     }
else{
    cout<<ch<<" is a consonant.";
}
return 0;
}
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    cout<<vowel(ch);
    
   
return 0;
}
