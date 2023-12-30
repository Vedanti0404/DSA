//Write a program to count the number of vowels and consonants in a string
#include<bits/stdc++.h>
using namespace std;
bool Vowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' ||ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowelcount = 0;
    int consonantcount = 0;

    for (char c : str) {
        if (isalpha(c)) { 
            if (Vowel(c)) {
                vowelcount++;
            } else {
                consonantcount++;
            }
        }
    }

    cout << "Number of vowels: " << vowelcount << endl;
    cout << "Number of consonants: " << consonantcount << endl;

    return 0;
}
