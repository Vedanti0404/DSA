#include <bits/stdc++.h>
using namespace std;

void reverseString(int start, int end, string &s) {
    if (start >= end) {
        return;
    }
    swap(s[start], s[end]);
    reverseString(start + 1, end - 1, s);
}

int main() {
    string s = "hello";
    
    reverseString(0, s.length() - 1, s);
    
    
    cout << s << endl;

    return 0;
}
