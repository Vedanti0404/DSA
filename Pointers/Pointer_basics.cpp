#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=20;
    cout<<&a<<endl;//address of a
    int *ptr=&a;
    cout<<ptr<<endl; //address of a
    cout<<*ptr<<endl; //value of a
    cout<<sizeof(ptr)<<endl;

    float b=2.789;
    cout<<&b<<endl;//address of b
    float *p=&b;
    cout<<p<<endl; //address of b
    cout<<*p<<endl; //value of b
    cout<<sizeof(p)<<endl;//size of the pointer of every datatype remains same for 4GB RAM if Ram is 8Bytes then size becomes 8 bytes

    //accessing different variables
    int c=256;
    ptr=&c;
    cout<<*ptr<<endl;

    //changing the value of the pointer using the pointers

    *p=150;
    cout<<*p<<endl;
return 0;
}