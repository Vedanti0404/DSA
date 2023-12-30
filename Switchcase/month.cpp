//Write a program to print the name of a month based on its number.
#include <iostream>
using namespace std;
string month(int num) {
    string n;
switch (num) {
        case 1:
            n = "January";
            break;
        case 2:
            n = "February";
            break;
        case 3:
            n = "March";
            break;
        case 4:
           n = "April";
            break;
        case 5:
           n = "May";
            break;
        case 6:
           n = "June";
            break;
        case 7:
            n = "July";
            break;
        case 8:
           n = "August";
            break;
        case 9:
            n = "September";
            break;
        case 10:
            n = "October";
            break;
        case 11:
            n = "November";
            break;
        case 12:
            n = "December";
            break;
 }
 return n;
}
int main() {
    int num;
    cout << "Enter the month number: ";
    cin >> num;
    cout << "The month is: " << month(num)<< endl;
    return 0;
}
