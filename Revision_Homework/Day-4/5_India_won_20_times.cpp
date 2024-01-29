#include<bits/stdc++.h>
using namespace std;

class India {
private:
    int *n;

public:
    India(int n) : n(new int(n)) {}

    ~India() {
        delete n;
    }

    string Print_India_won() {
        string result;
        for (int i = 0; i < *n; i++) {
            result += "India Won the World Cup.\n";
        }
        return result;
    }
};

int main() {
    int n = 20;
    India *obj = new India(n);

    cout << obj->Print_India_won();

    delete obj;
    return 0;
}