/*
suppose binary num =1101

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a binary number: ";
    cin>>num;
    int rem, ans=0,mul=1;
    while(num>0){
        rem=num%10; // -->remainder
        num=num/10;// -->quotient
        ans=rem*mul+ans;//answer
        mul=mul*2;//multiplication
    }
    cout<<ans<<endl;
return 0;
}