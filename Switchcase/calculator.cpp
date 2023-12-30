//Write a program to simulate a simple calculator 
#include<bits/stdc++.h>
using namespace std;
int main() {
    char op;
    double num1, num2, ans;
    cout << "Enter the operation: ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            ans = num1 + num2;
            cout  << num1 << " + " << num2 << " = " << ans << endl;
            break;
        case '-':
            ans = num1 - num2;
            cout << num1 << " - " << num2 << " = " << ans << endl;
            break;
        case '*':
            ans = num1 * num2;
            cout << num1 << " * " << num2 << " = " << ans << endl;
            break;
        case '/':
            if (num2 != 0) {
                ans = num1 / num2;
                cout << num1 << " / " << num2 << " = " << ans << endl;
            } else {
                cout << "Error." << endl;
            }
            break;
        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
