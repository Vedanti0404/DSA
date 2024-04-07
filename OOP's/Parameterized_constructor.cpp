#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int age;

    public:
    Student(string n,int a){
        name=n;
        age=a;
    }

    void print(){
        cout<<"Name of the student is: "<<name<<endl;
        cout<<"Age of the student is: " <<age<<endl;
    }
    
};
int main(){
   Student s1("ba",21);
   cout<<"Studen 1 Details:"<<endl;
   s1.print();
   Student s2("bu",21);
   cout<<"Studen 2 Details:"<<endl;
   s2.print();
return 0;
}