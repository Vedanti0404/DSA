/*
   1
  22 
 333
4444

space  row  print
4-row   1     1
3-row   2     2
2-row   3     3
1-row   4     4


logic-->
row=1
row<=4
print space,4-row times
print row,row times
row=row+1

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
  for(int i=1;i<=4;i=i+1){
    //space
     for(int j=1;j<=4-i;j=j+1){
        cout<<" ";
     }
        //num
        for(int j=1;j<=i;j=j+1){
            cout<<i;
        }
        cout<<endl;
     
  
  }
return 0;
}