#include<bits/stdc++.h>
using namespace std;
void square(int n){
    if(n==0){
        return;
    }
     square(n-1);
     cout<<pow(n,2)<<endl;
}
int main(){
    int n=5;
    square(n);
    
return 0;
}