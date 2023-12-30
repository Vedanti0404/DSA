//Write a program to check if a number is even or odd.
#include<bits/stdc++.h>
using namespace std;
int even_or_odd(int num){
    
    if(num%2==0)
{
    cout<<"even"<<endl;
    
   
}
else{
    cout<<"odd"<<endl;
     
}
    return 0;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    even_or_odd(num);
}     
