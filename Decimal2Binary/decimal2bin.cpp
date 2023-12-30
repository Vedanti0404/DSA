/*
working of code:
suppose num=13
it will first check if num>0
if yes it will find the remainder ,now -->remainder of 13%2=1 
num will become ---> num=num/2 -->13/2=6
now for answer it is initialized to 0 -->rem*mul+ans
1*1+0=1
now multiply 10 with mul which is initialized to 1 so-->1*10=10

again it will go back and check if num > 0. Now num=6 which is greater than 0 . so remainder=6%2=0.now num--> 3
ans=rem*mul+ans-->0*10+1(above ans which is 1)=1


now num=3
mul=10*10=100
rem=1
num=1
ans=1*100+1=101

now num =1
mul=100*10=1000
rem=1
num=0
ans=1*1000+101=1101

again multiply mul *10 
next check whether num>0 now it is 0 so loop ends here and the latest answer should be printed
*/




#include<bits/stdc++.h>
using namespace std;
void dtb(int n){
    cout<<"Enter a number: ";
    cin>>n;
    int rem, ans=0,mul=1;
    vector<int> v;
    while(n>0){
      rem=n%2;
      v.push_back(rem); 
      n=n/2;

}
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}




}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rem, ans=0,mul=1;
    while(num>0){
        rem=num%2; // -->remainder
        num=num/2;// -->quotient
        ans=rem*mul+ans;//answer
        mul=mul*10;//multiplication
    }
    cout<<ans<<endl;
    
return 0;
}