//A pangram is a sentence where every letter of the English alphabet appears at least once.

#include<bits/stdc++.h>
using namespace std;

class Pangram {
public:
    bool checkIfPangram(string s) {
        vector<bool> alpha(26, false);
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) { // Check if the character is an alphabet
                alpha[tolower(s[i]) - 'a'] = true;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (alpha[i] == false)
                return false;
        }
        return true;
    }
};

int main() {
    Pangram object;
    cout << "Enter the sentence: ";
    string input;
    getline(cin, input);

    bool isPangram = object.checkIfPangram(input);

    if (isPangram) {
        cout << "The sentence entered is a Pangram." << endl;
    } else {
        cout << "The sentence entered is not a Pangram." << endl;
    }

    return 0;
}
