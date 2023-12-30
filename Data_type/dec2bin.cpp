//Write a program to convert a decimal number to binary.
#include<bits/stdc++.h>
using namespace std;
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