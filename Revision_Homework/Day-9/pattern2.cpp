/*Second Pattern:
   
    A
    A B
    A B C
    A B C D
    A B C D E
     

*/

#include<bits/stdc++.h>
using namespace std;

class Pattern{
private:
    int *n;

public:
    Pattern(int n) : n(new int(n)) {}

    ~Pattern() {
        delete n;
    }
    void Print_pattern(int rows) {
      
        for (int i = 0; i < rows; ++i) {
            char ch = 'A';
            for (int j = 0; j <= i; ++j, ++ch) {
                std::cout << ch << ' ';
            }
            std::cout << std::endl;
        }
    }
};
     


int main() {
   Pattern obj(5);
    obj.Print_pattern(5);
    return 0;
}

