#include<bits/stdc++.h>
using namespace std;

class Character {
private:
    char *c;

public:
    Character(char c) : c(new char(c)) {}

    ~Character() {
        delete c;
    }

    void Print_char() {
        for (char i = 'Z'; i >= *c; i--) {
            cout << i << "\n";
        }
    }
};

int main() {
    char c = 'A';
    Character *obj = new Character(c);

    obj->Print_char();

    delete obj;
    return 0;
}