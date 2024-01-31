/*First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 */

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
        for( int i = 1; i<= *n; i++ ) 
   {
      for( int j = 1; j<= *n; j++ ) 
      {
         cout << "4"<<" ";
      }
      cout << endl;
   }

    }
};

int main() {
    int n = 5;
    Pattern *obj=new Pattern(n);

    obj->Print_pattern();
    delete obj;
    return 0;
}
