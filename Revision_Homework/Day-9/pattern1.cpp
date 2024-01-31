/*First Pattern:
       
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
  
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

   void Print_pattern() {
        for (int i = 1; i < *n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}
};
int main() {
    int n ;
    cout<<"Enter n: ";
    cin>>n;
   
    Pattern *obj=new Pattern(n);

    obj->Print_pattern();
    delete obj;
    return 0;
}

