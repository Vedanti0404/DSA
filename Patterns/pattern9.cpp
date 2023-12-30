/*
    a
   ab
  abc
 abcd
abcde
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

  for(int i=1;i<=5;i=i+1){
    //space
     for(int j=1;j<=5-i;j=j+1){
        cout<<" ";
     }
        //num
        for(char name='a';name<='a'+i-1 ;name=name+1){
            cout<<name;
        }
        cout<<endl;
     
  
  }
return 0;
}