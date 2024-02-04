#include <iostream>
using namespace std;

int vowel(string s, int index, int size, int count = 0) {
    if (index == size) {
        return count;
    }

    if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U') {
        count++;
    }

    return vowel(s, index + 1, size, count);
}

int main() {
    string c = "Vedanti";
    cout << "Number of vowels: " << vowel(c, 0, c.size()) << endl;

    return 0;
}