//Write a program to find the largest of three numbers.
#include<bits/stdc++.h>
using namespace std;
int largest(int a, int b,int c){
    if(a>b && a>c){
        cout<<a<<" is largest number among the 3 numbers."<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is largest number among the 3 numbers."<<endl;
 }
 else {
    cout<<c<<" is largest number among the 3 numbers. "<<endl;
 }
 return 0;
}
int main(){
    int a ,b ,c;
    cout<<"Enter a the three number: ";
    cin>>a>>b>>c;
    largest(a,b,c);
return 0;
}