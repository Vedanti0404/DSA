/*
    1
   12
  123
 1234
12345

space   print num
5-row    1 to row

logic-->
 row=1
 row<=5
 print space (5-row)
 print 1 to row
 row = row+1

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  for(int i=1;i<=5;i=i+1){
    //space
     for(int j=1;j<=5-i;j=j+1) {
        cout<<" ";
     }
        //num
        for(int j=1;j<=i;j=j+1){
            cout<<j;
        }
        cout<<endl;
     
  
  }
return 0;
}