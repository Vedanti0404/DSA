#include<bits/stdc++.h>
using namespace std;

bool Prime(int n){
    if(n<2)    
    return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;

    }
    return 1;
}

int Fact(int n=3)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    ans=ans*i;

    return ans;
}
int main(){
    int a,b;
    cout<<"Enter the number : ";
    cin>>a,b; 
    //A is prime or not
cout<< Prime(a)<<endl;

   //A factorial
cout<<Fact(a)<<endl;

   //B is prime or not
cout<<Prime(b)<<endl;

   //B factorial
cout<<Fact(b)<<endl;

   //B-A prime or not
cout<<Prime(b-a)<<endl;

    //B-A factorial
cout<<Fact(b-a)<<endl;


return 0;
}