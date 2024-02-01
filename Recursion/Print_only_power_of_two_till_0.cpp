#include<bits/stdc++.h>
using namespace std;
void func(int n){
     if(n==0)
     return ; 
     else if(n>0){
        
        cout<<pow(n,2)<<endl;
        func(n-1);
        
        return ;
     }  
    
    }
int main(){
    func(10);
return 0;
}