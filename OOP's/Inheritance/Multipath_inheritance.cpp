#include <iostream>
using namespace std;

class Human {
public:
    string name;
    void display() {
        cout << "My name is " << name << endl;
    }
};

class Engineer : virtual public Human {
public:
    string specialization;

    void work() {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Dancer : virtual public Human {
public:
    string dance_form;

    void danceForm() {
        cout << "I have learnt " << dance_form << endl;
    }
};

class Coder : public Engineer, public Dancer {
public:
    int salary;

    Coder(string name, string specialization, string dance, int salary)
        : Human(), Engineer(), Dancer() {
        this->name = name;
        this->specialization = specialization;
        this->dance_form = dance;
        this->salary = salary;
    }

    void show() {
        cout << "My name is " << name << endl;
        work();
        danceForm();
        cout << "My salary is " << salary << endl;
    }
};

int main() {
    Coder C1("Vedanti", "CSBS", "Bharatnatyam", 50000);
    C1.show();
    return 0;
}
