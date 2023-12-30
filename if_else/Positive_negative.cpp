//Write a program to check if a number is positive or negative.
#include <iostream>
using namespace std;

int positive_negative(int n) {
    if (n > 0) {
        cout << "Number is positive." << endl;
    } else if (n < 0) {
        cout << "Number is negative." << endl;
    } else {
        cout << "Number is zero." << endl;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    positive_negative(n);
    return 0;
}
