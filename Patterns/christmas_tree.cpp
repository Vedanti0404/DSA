//Write a program to print a Christmas tree pattern using stars.
#include <bits/stdc++.h>
using namespace std;

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; i++) {
        cout << "*";
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the Christmas tree: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        printSpaces(n - i);
        printStars(2 * i - 1);
        cout << endl;
    }

    // Print the tree trunk
    int trunkHeight = n / 3;
    for (int i = 0; i < trunkHeight; i++) {
        printSpaces(n - 1);
        cout << "*" << endl;
    }

    return 0;
}
