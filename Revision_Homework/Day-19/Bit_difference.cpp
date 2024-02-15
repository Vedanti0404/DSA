#include <iostream>
using namespace std;
class Bits {
public:
    int count(int a, int b) {
        int result = a ^ b;
        int count = 0;
        while (result) {
            count += result & 1;
            result >>= 1;
        }
        return count;
    }
};

int main() {
    Bits obj;
    int A = 10; 
    int B = 20; 
    int bits = obj.count(A, B);
    cout << "Number of bits needed to be flipped to convert " << A << " to " << B << ": " << bits <<endl;

    return 0;
}
