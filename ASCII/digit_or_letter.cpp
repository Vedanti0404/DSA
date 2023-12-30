//Write a program to check if a character is a digit or a letter.
#include<bits/stdc++.h>
using namespace std;
char digit_or_letter(char ch){
   if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) {
        cout << ch << " is a letter" << endl;
        return 'L';
    } else if (ch >= 48 && ch <= 57) {
        cout << ch << " is a digit" << endl;
        return 'D';

    }
    }

int main(){
   char ch;
   cout<<"Enter character: ";
   cin>>ch;
   digit_or_letter(ch);
return 0;
}