#include<bits/stdc++.h>
using namespace std;

class Ticket{

private:
int *age;
public:
Ticket(int age){
    this->age=new int(age);
}
string print_discount_available_or_not(int age)
        {
            if (age>=65)
           return "No Discount Available";
           else
           return "Discount Available";
        }
        ~Ticket(){  
            delete age;
            
        }
};
int main(){
     int age = 65;
    
   Ticket *obj =  new Ticket(age); 
    cout<<obj->print_discount_available_or_not(age); 
    delete obj;
return 0;
}