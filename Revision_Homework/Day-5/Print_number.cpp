#include<bits/stdc++.h>
using namespace std;

class Print_num {
private:
    int *n;

public:
    Print_num(int n) : n(new int(n)) {}

    ~Print_num() {
        delete n;
    }

    string Print_num_280_250() {
        for (int i = 280; i >= *n; i--) {
            cout << i << "\n";
        }
    }
};

int main() {
    int n = 250;
    Print_num *obj=new Print_num(n);

    obj->Print_num_280_250();
    delete obj;
    return 0;
}