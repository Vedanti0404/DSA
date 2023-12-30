/*Pattern 3
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

concept--> row=1
           row<=5
           print 1 to 5
           row=row+1

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
   int row,col;
   for(row=1;row<=5;row=row+1){
       for(col=1;col<=5;col=col+1){
        cout<<col<< " ";
       }
       cout<<endl;
   }
return 0;
}