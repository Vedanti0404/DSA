/***
 * 
ChatGPT 3.5

User
1: Find the cube of a number using Function. 

2: Reverse a number n using Function, Constraints: -5000<=n<=5000

3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

4: Swap 2 numbers a, b without using extra variables. Range of 
-10000<=a,b<=100000. 

5: Print “Hello Coder Army” n times using Function.

6: Given two numbers n, r. Find nCr (Combination). Use Function here.
*/


#include <iostream>

using namespace std;

// 1: Find the cube of a number using Function
void findCube() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " is: " << num * num * num << endl;
}

// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000
void reverseNumber() {
    int n;
    cout << "Enter a number (-5000 to 5000): ";
    cin >> n;

    if (n >= -5000 && n <= 5000) {
        int reversed = 0;
        while (n != 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        cout << "Reversed number: " << reversed << endl;
    } else {
        cout << "Number out of range." << endl;
    }
}

// 3: Swap the values of three numbers without using extra variables
void swapValues() {
    int a, b, c;
    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;

    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;

    cout << "Swapped values: a=" << a << ", b=" << b << ", c=" << c << endl;
}

// 4: Swap 2 numbers a, b without using extra variables.
void swapNumbers() {
    int a, b;
    cout << "Enter two numbers (a, b): ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Swapped numbers: a=" << a << ", b=" << b << endl;
}

// 5: Print “Hello Coder Army” n times using Function.
void printHello(int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Hello Coder Army" << endl;
    }
}

// 6: Given two numbers n, r. Find nCr (Combination).
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

void findCombination() {
    int n, r;
    cout << "Enter two numbers (n, r): ";
    cin >> n >> r;

    if (n >= r) {
        int nCr = factorial(n) / (factorial(r) * factorial(n - r));
        cout << "nCr (Combination): " << nCr << endl;
    } else {
        cout << "Invalid input. n should be greater than or equal to r." << endl;
    }
}

int main() {
    findCube();
    reverseNumber();
    swapValues();
    swapNumbers();
    
    int n;
    cout << "Enter the value of n for Hello Coder Army: ";
    cin >> n;
    printHello(n);

    findCombination();

    return 0;
}
