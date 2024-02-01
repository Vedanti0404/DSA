/*
Recusrsion: when a function calls itself in its declaration, until a specific condition is met, we call it as recursion.
*/
#include<bits/stdc++.h>
using namespace std;
void func(int n){
    if(n==0){
        return;
    }
    if(n%2==0){
        cout<<n<<" is even"<<endl;
        func(n-1);
        return;
    }
    else {
        cout<<n<<" is odd"<<endl;
        func(n-1);
        return;
    }
    }
    
int main(){
    func(10);
return 0;
}