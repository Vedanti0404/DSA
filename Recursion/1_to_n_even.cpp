#include<bits/stdc++.h>
using namespace std;

void fun(int n){       
    if(n==0){
    return; //Stoppage or Base condition
    }
    else {
        if(n%2==0){
        fun( n-2);
        cout<<n<<endl;
       }
     
    }
    }


int main(){
    int n = 10;
    fun(n);  
    return 0;
}