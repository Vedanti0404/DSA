/*
Print number from 280 to 250 with the help of for loop.
Print char from ‘A’ to ‘Z’ with the help of a for loop.
Print char from ‘Z’ to ‘A’ with the help of a for loop.
There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
Print Sum of square of first n natural number.
Print Sum of cube of first n natural number
Print n’th Fibonacci number.

*/


#include<bits/stdc++.h>
using namespace std;

void print_num(){
   for (int i = 280; i >= 250; --i) {
       cout << i << endl;
    }
}

void alpha(){
for(char i='A';i<='Z';i++){      
    cout<<i<<endl;
}
}

void rev_alpha(){
    for(char i='Z';i>='A';i--){
        cout<<i<<endl;
    }
}

void ap(){
    for(int i=220;i<=730;i=i+7){
        cout<<i<<endl;
    } 
}

void natural(){
    int sum=0;
    
    for(int i=1;i<=4;i++){
        sum=sum+(i*i);
        }
        cout<<sum<<endl;
}

void cube(){
    int sum=0;
    
    for(int i=1;i<=4;i++){
        sum=sum+(i*i*i);
        }
        cout<<sum<<endl;

}

void fibonacci(){
int n=6;
int prev=0,next=1;
int sum;
cout<<prev<<endl;
cout<<next<<endl;
for(int i=2;i<n;i++){
    sum=prev+next;
    
    prev=next;
    next=sum;
  
cout<<sum<<endl; 

}
}


int main(){
print_num();
alpha();
rev_alpha();
ap();
natural();
cube();
fibonacci();
return 0;
}