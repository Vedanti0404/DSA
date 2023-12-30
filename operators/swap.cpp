//Write a program to swap the values of two variables.
#include<bits/stdc++.h>
using namespace std;
int swap(int a,int b){
    int temp=0;
    cout<<"numbers before swapping are: "<<a<<" "<<b<<endl;
    temp = a;
    a =b;
    b =temp;
    cout<<"numbers after swapping are: "<<a<<" "<<b<<endl;
    a = a + b; // a = 2 + 4 = 6
    b = a - b; // b = 6 - 4 = 2
    a = a - b; // a = 6 - 2 = 4
    
    
return 0;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<swap(a,b)<<endl;
return 0;
}