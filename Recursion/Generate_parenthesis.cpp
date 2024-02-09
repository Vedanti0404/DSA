#include <bits/stdc++.h>
using namespace std;

class Parenthesis {
public:
    vector<string> genparenthesis(int n) {
        vector<string> ans;
        string temp;
        parenthesis(n, 0, 0, ans, temp);
        return ans;
    }

private:
    void parenthesis(int n, int left, int right, vector<string>& ans, string& temp) {
        if (left + right == 2 * n) {
            ans.push_back(temp);
            return;
        }
        if (left < n) {
            temp.push_back('(');
            parenthesis(n, left + 1, right, ans, temp);
            temp.pop_back();
        }
        if (right < left) {
            temp.push_back(')');
            parenthesis(n, left, right + 1, ans, temp);
            temp.pop_back();
        }
    }
};

int main() {
    int n = 3; 
    vector<string> res = Parenthesis().genparenthesis(n);
    for (string& s : res) 
    {
        cout << s << endl;
    }
    
    return 0;
}
