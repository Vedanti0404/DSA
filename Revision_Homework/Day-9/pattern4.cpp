/*Fourth Pattern:

      A B C D
      A B C
      A B
      A

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

    void Print_pattern(int rows) {
        for (int i = rows; i > 0; --i) {
            char ch = 'A';
            for (int j = 0; j < i; ++j, ++ch) {
                cout << ch << ' ';
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern obj(4); 
    obj.Print_pattern(4);
    return 0;
}
