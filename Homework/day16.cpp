/***
 * Write a program to convert binary numbers to decimal numbers using a for loop.

Write a program to convert decimal numbers to binary numbers using a for loop.
Write a program to convert decimal numbers to Octal numbers.
Write a program to convert Octal numbers to decimal numbers.
Write a program to convert binary to Octal numbers
Write a program to convert Octal numbers to binary numbers



*/
#include<bits/stdc++.h>
using namespace std;
void binaryToDecimal() {
    long long binaryNumber, decimalNumber = 0;
    int i = 0, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }

    cout << "Decimal equivalent: " << decimalNumber <<endl;
}


void decimalToBinary() {
    int decimalNumber, binaryNumber = 0, remainder, i = 1;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * i;
        decimalNumber /= 2;
        i *= 10;
    }

    cout << "Binary equivalent: " << binaryNumber << endl;
}


void decimalToOctal() {
    int decimalNumber, octalNumber = 0, i = 1, remainder;

   cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * i;
        decimalNumber /= 8;
        i *= 10;
    }

   cout << "Octal equivalent: " << octalNumber <<endl;
}



void octalToDecimal() {
    int octalNumber, decimalNumber = 0, i = 0, remainder;

    cout << "Enter an octal number: ";
    cin >> octalNumber;

    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        decimalNumber += remainder * pow(8, i);
        ++i;
        octalNumber /= 10;
    }

    cout << "Decimal equivalent: " << decimalNumber <<endl;
}



void binaryToOctal() {
    long long binaryNumber, octalNumber = 0;
    int i = 0, remainder;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 1000;
        octalNumber += remainder * pow(2, i);
        ++i;
        binaryNumber /= 1000;
    }

   cout << "Octal equivalent: " << octalNumber <<endl;
}



void octalToBinary() {
    int octalNumber, binaryNumber = 0, i = 1, remainder;

    cout << "Enter an octal number: ";
    cin >> octalNumber;

    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        binaryNumber += remainder * i;
        octalNumber /= 10;
        i *= 1000;
    }

cout << "Binary equivalent: " << binaryNumber <<endl;
}

int main(){
    binaryToDecimal();
    decimalToBinary();
    decimalToOctal();
    octalToDecimal();
    binaryToOctal();
   octalToBinary();

return 0;
}