#include<bits/stdc++.h>
using namespace std;

class Cube {
private:
    int *n;

public:
 Cube(int n) : n(new int(n)) {}

    ~Cube() {
        delete n;
    }

    int Sum_of_Cube() {
        int ans = 0;
        for (int i = 1; i <= *n; i++) {
            ans += i * i *i;
        }
        return ans;
    }
};

int main() {
    int n = 5;
    Cube *obj = new Cube(n);

    int result = obj->Sum_of_Cube();
    cout << "Sum of Cube: " << result << endl;

    delete obj;
    return 0;
}