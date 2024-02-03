#include<bits/stdc++.h>
using namespace std;
int square(int n){
    if(n==0){
        return 0;
    }
    return n*n + square(n-1);
}
int main(){
    int n=5;
    cout<<square(n)<<endl;
    
return 0;
}