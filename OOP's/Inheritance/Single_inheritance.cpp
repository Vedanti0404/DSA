#include<bits/stdc++.h>
using namespace std;

class Human{
  protected:
  string name;
  int age;

  public:
  Human(string name,int age){
    this->name=name;
    this->age=age;
  }

  void work(){
    cout<<"I am working \n";
  }  

// Human(){
//     cout<<"Hello Human \n";
// }                                  //first the constructor of parent class will be called reason is inheritance
                                   //and destructor of the parent class will be called after the destructor of derieved class
};                                 

class Student: public Human{
        int roll_no,fees;

        public:
        Student(string name,int age,int roll_no,int fees):Human(name,age)
        {
            
            this->roll_no=roll_no;
            this->fees=fees;

        }

        // Student(){
        //     cout<<"Hello student \n";
        // }                               // then this constructor will be called after the parent class constructor
                                        // and destructor of the derieved class is called first
 

    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<" "<<endl;
    }

       };
int main(){
    
     Student S1("Vedanti" , 20 ,7 ,15000);
    S1.display();
return 0;
}