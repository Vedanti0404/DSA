#include<bits/stdc++.h>
using namespace std;

class Longest {
public:
    int lsp(string s) {
        vector<int> lsp(s.size(), 0);
        int pre = 0, suf = 1;
        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                pre++;
                lsp[suf] = pre;
                suf++;
            } else {
                if (pre == 0) {
                    lsp[suf] = 0;
                    suf++;
                } else {
                    pre = lsp[pre - 1];
                }
            }
        }
        return lsp[s.size() - 1];
    }
};

int main() {
    Longest object;
    
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result = object.lsp(input);

    cout << "Length of the longest prefix suffix: " << result << endl;

    return 0;
}
