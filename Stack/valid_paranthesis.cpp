#include <bits/stdc++.h>

using namespace std;

class Parenthesis {
public:
    bool isValid(string s) {
        stack<char> st;
        long long n = s.size();
        for (long long i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else if (s[i] == ')') {
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                } else {
                    return false;
                }
            } else if (s[i] == '}') {
                if (!st.empty() && st.top() == '{') {
                    st.pop();
                } else {
                    return false;
                }
            } else if (s[i] == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Parenthesis obj;
    string input;
    cout << "Enter the string containing parentheses: ";
    cin >> input;
    if (obj.isValid(input)) {
        cout << "The string has valid parentheses pairs." << endl;
    } else {
        cout << "The string does not have valid parentheses pairs." << endl;
    }
    return 0;
}
