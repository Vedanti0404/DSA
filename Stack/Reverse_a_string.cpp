#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Reverse {
public: 
    void revstring(vector<char>& s) { // Pass vector by reference to modify it
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            st.push(s[i]);
        }
        s.clear();
        while(!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
    }
};

int main() {
    Reverse obj;
    string n;
    cout << "Enter the string: ";
    cin >> n;

    vector<char> s(n.begin(), n.end());
    obj.revstring(s);
    
    cout << "The reversed string is: ";
    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];
    }
    cout << endl;
    
    return 0;
}
