#include<bits/stdc++.h>
using namespace std;

class Area{
    public:
    int calculateArea(int r){    //for circle
        return 3.14*r*r;
    }

    int calculateArea(int l,int b){ //for rectangle
        return l*b;
    }
// Both functions are having same name but different parameters..This is called as function overloading
};
int main(){
   Area A1,A2;
   cout<<A1.calculateArea(4)<<endl;
   cout<<A2.calculateArea(3,4)<<endl;
   
return 0;
}
