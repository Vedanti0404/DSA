//Write a function to check if a number is prime.
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++)
{
  if(n%i==0) {
  return true;
    
}
else{
    return false;
}
}
}
int main(){
int n;
cout<<"Enter number: ";
cin>>n;
if(prime(n)){
    cout<<"number is not prime"<<endl;
}
else{
    cout<< "number is  prime"<<endl;
}

return 0;
}