/**Print number
Two numbers are given, print their product
Two numbers are given a and b, print a-b
Print 6*3 in output, don’t print 18, just 6*3 should be in the output screen.
If we have only 4 bits, How 3 and -6 will be written in 4 bits.
If we have only 5 bits, How 13 and -16 will be written in 5 bits.

*/
/*functions priority
   w r w  p
   w r wo p
   wo r w p
   wo r wo p
*/

#include<bits/stdc++.h>
using namespace std;
int prod(int x,int y){
    return(x*y);
}
int sub(int a,int b){
    return(a-b);
}
int main(){
    int x,y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    cout<<"Product of two numbers is: "<<prod(x,y)<<endl;
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"(a-b): "<<sub(a,b)<<endl;
    cout<<"6*3"<<endl;
    cout<<"3 can be written as "<<"0011"<<" -6 can be written as "<<"1010"<<endl;
    cout<<"13 can be written as "<<"01101"<<" -16 can be written as "<<"10000"<<endl;
return 0;
}