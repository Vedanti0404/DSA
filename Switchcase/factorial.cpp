//factorial
#include<bits/stdc++.h>
using namespace std;
int fact (int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial is: "<<fact(n)<<endl;
return 0;
}