//Write a program to convert a character to lowercase 
#include<bits/stdc++.h>
using namespace std;
void lowercase(string str){
for(int i=0;str[i]>0;i++){
    if (str[i] >= 65 && str[i] <= 90 ) {
			str[i] = str[i] + 32; 
    }  
}
cout<<"String in lower case: "<< str<<endl;
}

int main(){
   string str;
   cout<<"Enter string: ";
   getline(cin,str);
   lowercase(str);
return 0;
}