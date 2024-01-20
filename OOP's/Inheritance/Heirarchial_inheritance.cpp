#include<bits/stdc++.h>
using namespace std;

class Human {
protected:
    string name;
    int age;

public:
    Human(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void work() {
        cout << "I am working\n";
    }
};

class Teacher : public Human {
    int salary;

public:
    Teacher(int salary, string name, int age) : Human(name, age) {
        this->salary = salary;
    }

    void display() {
        cout << name << " " << age << " " << salary << endl;
    }
};

class Student : public Human {
    int roll_no, fees;

public:
    Student(string name, int age, int roll_no, int fees) : Human(name, age) {
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display() {
        cout << name << " " << age << " " << roll_no << " " << fees << endl;
    }
};

int main() {
    Student S1("Vedanti", 20, 7, 15000);
    S1.display();

    Teacher T1(100000, "Rohit", 30);
    T1.display();

    return 0;
}
