//There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include<bits/stdc++.h>
using namespace std;

class AP{
private:
    int *n;

public:
    AP(int n) : n(new int(n)) {}

    ~AP() {
        delete n;
    }

   void Print_num() {
        for (int i = 220; i <= *n; i += 7) {
            cout << i << "\n";
        }
    }
};

int main() {
    int n = 730;
    AP *obj=new AP(n);

    obj->Print_num();
    delete obj;
    return 0;
}