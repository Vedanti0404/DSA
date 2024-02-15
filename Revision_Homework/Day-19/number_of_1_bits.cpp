#include <bits/stdc++.h>
using namespace std;

class Bits {
public:
    int number(int N) {
        int count = 0;

        while (N) {
            count += N & 1;
            N >>= 1;
        }

        return count;
    }
};

int main() {
    
    Bits obj;
    int N = 6;
    int count = obj.number(N);
    cout << "The count of set bits in the binary representation of " << N << " is: " << count <<endl;

    return 0;
}
