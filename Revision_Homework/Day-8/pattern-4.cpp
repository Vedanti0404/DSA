/*Fourth Pattern:

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K
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
        for (int i = 0; i < *n; i++) {
            for (char j = 'F'; j <= 'K'; j++) {
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
