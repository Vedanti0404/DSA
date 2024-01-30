#include<bits/stdc++.h>
using namespace std;

class Square {
private:
    int *n;

public:
    Square(int n) : n(new int(n)) {}

    ~Square() {
        delete n;
    }

    int Sum_of_square() {
        int ans = 0;
        for (int i = 1; i <= *n; i++) {
            ans += i * i;
        }
        return ans;
    }
};

int main() {
    int n = 5;
    Square *obj = new Square(n);

    int result = obj->Sum_of_square();
    cout << "Sum of squares: " << result << endl;

    delete obj;
    return 0;
}