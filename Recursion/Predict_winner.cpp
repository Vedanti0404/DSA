#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int solve(int n, int k) {
        if (n == 1)
            return 0;

        return (solve(n - 1, k) + k) % n;
    }

    int findTheWinner(int n, int k) {
        int ans = solve(n, k) + 1;
        return ans;
    }
};

int main() {
    Solution solution;
    int n = 5; // Example value for n
    int k = 2; // Example value for k
    int winnerIndex = solution.findTheWinner(n, k);
    std::cout << "The winner's index is: " << winnerIndex << std::endl;
    return 0;
}
