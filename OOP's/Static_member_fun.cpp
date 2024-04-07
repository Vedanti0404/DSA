#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
        int age;
        static int count;

    public:

    Student(string name, int age){
        this->name=name;
        this->age=age;
        count++;
    }


    static int getcount(){
        return count;
    }
};

int Student::count=0;
int main(){
    Student obj1("Vedanti", 21);
    Student obj2("Rohit", 21);
    cout << "Total number of students: " << Student::getcount() << endl;
return 0;
}