#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a=20;
    // cout<<&a<<endl;//address of a
    // int *ptr=&a;
    // cout<<ptr<<endl; //address of a
    // cout<<*ptr<<endl; //value of a
    // cout<<sizeof(ptr)<<endl;

    // float b=2.789;
    // cout<<&b<<endl;//address of b
    // float *p=&b;
    // cout<<p<<endl; //address of b
    // cout<<*p<<endl; //value of b
    // cout<<sizeof(p)<<endl;//size of the pointer of every datatype remains same for 4GB RAM if Ram is 8Bytes then size becomes 8 bytes

    // //accessing different variables
    // int c=256;
    // ptr=&c;
    // cout<<*ptr<<endl;

    // //changing the value of the pointer using the pointers

    // *p=150;
    // cout<<*p<<endl;

    //pointers arithematic:moving from one addresss to another using the base address
    //base address : address of 0th index of the arr or (arr)/ (&arr[0])
    cout<<"\n\nPointers in array:\n";
    int arr[5]={1,2,3,4,5};
    int *ptr1=&arr[0];//explicit declaration of zeroth index
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;

    ptr1=arr;//implicit declaration of zeroth index
    cout<<ptr1<<endl;
    cout<<ptr1<<endl;

    for (int i=0;i<5;i++){
        cout<<"Address of the index number "<<  i<<" :"<<ptr1<<endl;
        cout<<"Value at address "<<i<<" :"<<*ptr1<<endl;    
          ptr1++;
            }
return 0;
}