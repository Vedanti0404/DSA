#include<bits/stdc++.h>
using namespace std;

void fun(int num, int n){       
    if(n>10){
    return; //Stoppage or Base condition
    }
    else{
        int ans=num*n;
        cout<<ans<<endl;
        fun(num, n+1);
        return;
    }
}

int main(){
    int num = 13;
    fun(num, 1);  
    return 0;
}