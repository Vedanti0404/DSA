#include<bits/stdc++.h>
using namespace std;
//Addition of two numbers
template<typename T>
class Sum{
    public:
    T x,y;
    T add(T a,T b){
        return a+b;
    }
};
int main(){
    Sum<int>s;
    cout<<s.add(10,20);
return 0;
}