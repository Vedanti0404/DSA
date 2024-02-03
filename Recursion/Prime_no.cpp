#include<bits/stdc++.h>
using namespace std;

    string prime(int n){
     if(n<2){
        return "Not Prime";
     }
     for(int i=2;i<n;i++){
        if(n%i==0){
       
        return"Not Prime";
        }
       
     }
     return "Prime";
    }
    void print_prime(int n){
        for(int i=2;i<n;i++){
            cout<<i<<":"<<prime(i)<<endl;
            
        }
    }

int main(){
  int n=10;
  print_prime(n);
return 0;
}
