#include<bits/stdc++.h>
using namespace std;
void even(int n){
    if(n==0){
        return;
    }
    even(n-1);
    if(n%2==0){
    cout<<n<<endl;
    }
    // even(n-1);
    }

void odd(int num){
    if(num==0){
        return;
    }
    odd(num-1);
    if(num%2!=0){
    cout<<num<<endl;
    }
    // odd(n-1);
    }

int main(){
    int n=10;
    int num=10;
    even(n);
    cout<<endl;
    odd(num);
return 0;
}