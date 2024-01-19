#include <iostream>
using namespace std;

class Human {
public:
    string name;
    int weight, age;

    void fun(string n, int a, int w) {
        name = n;
        age = a;
        weight = w;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Weight: " << weight << endl;
    }
};

int main() {

    Human A;
    A.fun("Vedanti", 10, 5);
    A.display();

    return 0;
}
