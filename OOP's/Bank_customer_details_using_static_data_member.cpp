#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int acc_no;
    int balance;
    static int tot_bal;
    static int tot_cust;

    public:
    Customer(string name,int acc_no,int balance){
    this->name=name;
    this-> acc_no=acc_no;
    this->balance=balance;
    tot_cust++;
    tot_bal +=balance;
 }

 static void accStatic(){
    cout<<"Total number of customers: "<<tot_cust<<endl;
    cout<<"Total balance: "<<tot_bal<<endl;
 }
  void deposit(int amount){
        if(amount>0){
            balance +=amount;
                tot_bal += amount;
        }
    }


    void withdraw(int amount){
        if(amount<=balance && amount>0){
            balance=amount;
            tot_bal=amount;
        }
    }
    void display() {
         cout << "Name: " << name << endl;
            cout << "Account Number: " << acc_no << endl;
            cout << "Balance: " << balance << endl;
            //cout << "Total_customers: " << tot_cust << endl;

    }
    
 
    void display_tot(){
        cout<<tot_cust<<endl;
        cout<<tot_bal<<endl;
    }


   
};

int Customer::tot_cust=0;
int Customer::tot_bal=0;
int main(){
 
 Customer C1("Abc",1,1000);
 Customer C2("Def",2,5000);
 Customer C3("Ghi",3,2000);
 C1.deposit(500);
 
Customer::accStatic();


 //Display details

//  C1.display();
//  C2.display();
//  C3.display();
 return 0;

}