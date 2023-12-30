//write a program to print factorial using while loop
#include<bits/stdc++.h>
using namespace std;
int fact(int n,int i=1,int f=1){
    while(i<=n)
    {
        f=f*i;
        i++;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int factorial=fact(n); 
    cout<<"Factorial of number is: "<<factorial<<endl;
    
return 0;
}