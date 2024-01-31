/*Third Pattern:
  
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
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
        for( int i = 1; i<= *n; i++ ) 
   {
      for( int j = 1; j<= *n; j++ ) 
      {
         cout << j * j * j<< " ";
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
