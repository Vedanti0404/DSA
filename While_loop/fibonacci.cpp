//Write a program to print a Fibonacci sequence up to a given number
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    int p=0,c=1;
    while (p <= n) {
        cout << p << " "<<endl;
        int next = p + c;
        p = c;
        c = next;
    }
   
    return n;
}
int main(){
    int n;
    cout<<"Enter th number upto to which u want the sequence: ";
    cin>>n;
    fibonacci(n);
    

return 0;
}
