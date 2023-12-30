//Write a program to check if a given year is a leap year.
#include<bits/stdc++.h>
using namespace std;
bool leap(int n){
    if(n%4==0){
       
        return true;
    }
    else if(n%100==0){
        
        return false;
    }
    else if(n%400==0){
        
        return true;
    }
    else{
        
        return false;
    }
}
int main()
{int n; 
     cout<<"Enter the year: ";
     cin>>n;
    if( leap(n) ){
        cout<<n<<" is a leap year."<<endl;
    }
    else{
        cout<<n<<" is not a leap year."<<endl;
    }

return 0;
}