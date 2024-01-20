#include<bits/stdc++.h>
using namespace std;

class Engineer {
public:
    string specialization;

    void work() {
        cout << "I have specialization in " << specialization << endl;
    }
};

class Dancer {
public:
    string dance_form;  // Corrected variable name

    void danceForm() {  // Corrected function name
        cout << "I have learnt " << dance_form << endl;
    }
};

class Coder : public Engineer, public Dancer {
public:
    string name;

    Coder(string name, string specialization, string dance) {
        this->name = name;
        this->specialization = specialization;
        this->dance_form = dance;  // Corrected variable name
    }

    void show() {
        cout << "My name is " << name << endl;
        work();
        danceForm();  // Corrected function name
    }
};

int main() {
    Coder C1("Vedanti", "CSBS", "Bharatnatyam");
    C1.show();
    return 0;
}
