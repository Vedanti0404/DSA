#include<bits/stdc++.h>
using namespace std;
void fun(int n){

    //Base Case
    if(n==2){
        cout<<2<<endl;
        return;
    }
    fun(n-2);
    cout<<n<<endl;
    
    return;
}
int main(){
    int n=10;
    fun(n);
return 0;
}