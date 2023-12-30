//perfect square
#include<bits/stdc++.h>
using namespace std;
bool Square(int num) {
    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (Square(n)) {
       cout << n << " is a perfect square." <<endl;
    } else {
        cout << n << " is not a perfect square." <<
        endl;
    }

    return 0;
}
