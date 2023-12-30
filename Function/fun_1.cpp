//sum and multiplication of 2 numbers
#include<bits/stdc++.h>
using namespace std;

int Sum( int m,int n)//function declare
{
int ans=m+n; //function define
return ans;
}

int Mul(int m,int n){
    int ans=m*n;
    return ans;
}
 void fun()
    {
        cout<<"hello world!";
    }

int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;


   

    //function call
    cout<<"The sum of two numbers is: "<<Sum(a,b)<<endl;
    cout<<"The multiplication of two numbers is: "<<Mul(a,b)<<endl;

     fun();


return 0;
}