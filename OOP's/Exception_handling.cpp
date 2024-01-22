/*==============================================================================================================================================
                                                             EXCEPTION HANDLING
================================================================================================================================================
An exception is an unexpected problem that arises during the execution of a program terminates suddenly with some errors/issues. Exception occurs during running of the program.
------------------------------------------------------------------------------------------------------------------------------------------------
1. try: The try keyword represents a codeblock that may throw an exception placed inside the try block. It is followed by on or more catch blocks.If an exception occurs, try block throws that exception.
------------------------------------------------------------------------------------------------------------------------------------------------
2. catch: The catch statement represents a block of code that is executed when a particular exception is thrown from try block. The code to handle the exception is written inside the catch block.
------------------------------------------------------------------------------------------------------------------------------------------------
3. throw: An exception is C++ can be thrown using the throw keyword.When a program encounters a throw statements , then it immediately terminates the current function and starts finding a matching catch block to handle the throw exception.

================================================================================================================================================
*/


#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int balance,acc_no;

    public:

    Customer(string name,int balance,int acc_no){
        this->name=name;
        this->balance=balance;
        this->acc_no=acc_no;
    }

    //Deposit
    
    void deposit(int amount){
        if(amount>0){

            balance+=amount;
            cout<<"Rs. "<<amount<<" is credited successfully\n";
        }
        else{
          throw "Amount should be greater than zero\n";
        }
    }
    //Withdraw


    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"Rs. "<<amount<<" is debited successfully\n";
        }
        else if(amount<0){
            throw "Amount should be greater than 0\n";
        }
        else{
            throw "Your balance is low\n";
        }
    }
};
int main(){
   Customer C1("Vedanti",5000,10);

   try{
   C1.deposit(200);
   C1.withdraw(7000);
   C1.deposit(200);
   }
   catch(const char *e){
    cout<<"Exception Occured: "<<e<<endl;
   }
return 0;
}