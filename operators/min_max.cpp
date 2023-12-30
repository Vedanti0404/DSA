//Write a program to find the maximum and minimum of two numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    if(num1>num2){
        cout<<num1<<" is  maximum and "<<num2<<" is minimum"<<endl;
    }
    else{
      cout<<num2<<" is  maximum and "<<num1<<" is minimum"<<endl;  
    }
    
return 0;
}