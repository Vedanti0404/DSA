#include<bits/stdc++.h>
using namespace std;

class Fibonacci{
private:
    int *n;

public:
    Fibonacci(int n) : n(new int(n)) {}

    ~Fibonacci() {
        delete n;
    }

   void Print_Fibo() {
       int prev = 0, next = 1, third; //prev is stroring the first number i.e 0
                                      //next is storing 1 
                                      //and third is initialized to calculate the next value
        cout << prev << " " << next << " ";
        
        for (int i = 2; i <= *n; i++) { //first two nos i.e 0 and 1 are already printed above
            third = prev + next;        // third is the sum of previous value and the next value
            cout << third << " ";        // printing the third value
            prev = next;                 // updating previous to next and next to third for further iterations
            next = third;
        }
        cout << endl;
    }
};

int main() {
   int n = 10; 
    Fibonacci *obj = new Fibonacci(n);

    obj->Print_Fibo();
    delete obj;
    return 0;
}