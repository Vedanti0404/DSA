/**
 * If-else
Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

 
 
 For Loop
Print “India will win the World Cup 2023”, 20 times.
Print all Odd numbers from 1 to n, take n as an input from the user.

Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

*/


#include<bits/stdc++.h>
using namespace std;
void print_larger(){
    int a=5;
    int b=3;
    if(a>b)
        cout<<a<<"is greater.";
        else
            cout<<"b is greater";
        
    }

    void adult(){
        int age=12;
        if(age>18)
            cout<<"adult"<<endl;
            else
             cout<<"not adult"<<endl;
            }
        
    

    void discout(){
        cout<<"Enter age: "<<endl;
        int age;
        cin>>age;
        if(age<=12 || age>=65)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    } 

    void print(){
        for(int i=1;i<=0;i++)
        cout<<"India will win the World Cup 2023"<<endl;
    }



    void odd(){
        cout<<"Enter nuber: ";
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i%2!=0)
            cout<<i<<endl;
        }
    }


int main(){
    print_larger();
    adult();
    discout();
    print();
    odd();

return 0;
}