//Write a program to remove all the spaces from a string.
#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            s[i] = '.';
        }
    }
cout << " string without spaces: " << s << endl;
return 0;
}
