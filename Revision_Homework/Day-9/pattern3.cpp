/*Third Pattern:
     
       10
       10 11
       10 11 12
       10 11 12 13
       10 11 12 13 14
       10 11 12 13 14 15
*/

#include<bits/stdc++.h>
using namespace std;

class Pattern {
private:
    int *n;

public:
    Pattern(int n) : n(new int(n)) {}

    ~Pattern() {
        delete n;
    }

    void Print_pattern() {
        for (int i = 0; i < *n; ++i) {
            for (int j = 10; j <= i + 10; ++j) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    Pattern *obj = new Pattern(n);

    obj->Print_pattern();
    delete obj;
    return 0;
}