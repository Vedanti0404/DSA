#include<bits/stdc++.h>
using namespace std;

    class Customer
    {
    string name;
    int acc_no;
    int balance;

    public:
//default constructor
    // Customer(){
    // cout<<"Constructor"<<endl;
    // }

   Customer(){
   name="Vedanti";
   acc_no=123;
   balance=1000;
   }    

//parameterized constructorpassing   parameters
// Customer(string a,int b,int c){
//     name=a;
//     acc_no=b;
//     balance=c;
// }

Customer(string a,int b){
    name=a;
    acc_no=b;
  
}
//this is also called as 'FUNCTION OVERLOADING' it means the name of the function is same but argument or the parameter is different.in this the name of the function i.e 'Customer' is same everywhere but the parameters we pass to it are different.
//created function for displaying the details.


//'this' pointer stores the address of the object.In simple words which ever object call this pointer it stores the address of that object
Customer(string name,int acc_no,int balance){
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;
}

//Inline Constructor
// inline Customer(string a,int b,int c): name(a),acc_no(b),balance(c){

// }

//Copy constructor
Customer(Customer &B)
{
    name=B.name;
    acc_no=B.acc_no;
    balance=B.balance;
}

   void display(){
    cout<<name<<" "<<acc_no<<" "<<balance<<endl;
   }
    };
    int main(){
   Customer C1;
   Customer C2("Vedanti",33,2000);
   Customer C3("Ved",453);
   Customer C4(C3);
   Customer C5;
//function call for displaying the details
   C1.display();
   C2.display();
   C3.display();
   C4.display();
   C5=C2;  //Use of assignment operator
   C5.display();
return 0;
}
//