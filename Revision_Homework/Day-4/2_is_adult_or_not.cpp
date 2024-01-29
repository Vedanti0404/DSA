#include<bits/stdc++.h>
using namespace std;

class Adult{

private:
int *age;
public:
Adult(int age){
    this->age=new int(age);
}
string print_adult_or_not(int age)
        {
            if (age>=18)
           return "Adult";
           else
           return "Teenager";
        }
        ~Adult(){  
            delete age;
            
        }
};
int main(){
     int age = 10;
    
   Adult *obj =  new Adult(age); 
    cout<<obj->print_adult_or_not(age); 
    delete obj;
return 0;
}