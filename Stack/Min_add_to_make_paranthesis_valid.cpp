#include <bits/stdc++.h>

using namespace std;

class Parentheses {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    count++;
                } else {
                    st.pop();
                }
            }
        }
        return count + st.size();
    }
};

int main() {
    Parentheses counter;
    string input;
    cout << "Enter the string containing parentheses: ";
    cin >> input;
    cout << "Minimum parentheses to add to make it valid: " << counter.minAddToMakeValid(input) << endl;
    return 0;
}
