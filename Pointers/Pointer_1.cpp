#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void func_pointer(int *ptr){
    *ptr = *ptr +100;// to change the original value at that address.
    cout<<*ptr<<endl;
}

void func_reference(int &ptr){
    ptr = ptr + 100;
    cout<<ptr<<endl;
}
int main()
{
    // references are similar to pointer , but they dont store the address.
    // then what do they do.
    // they just point to original value. and helps access original value everywhere.
    
    int a = 10;
    // references always have to be defined, because there is no concept as dangling, void, null reference.
    // int &b; // not allowed as the reference is not initialized.
    int &b = a;
    cout<<&b<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<a<<endl;
    
    b = 20;
    cout<<a<<endl;
    
    a =100;
    cout<<b<<endl;
    
    // they are used to escape the complesities of using a pointer. passing the address,
    // storing the adrress ... but still able to use its advantages
    
    // pass the pointer(reference) like object without passing the original value
    
    // create function that uses pointer and compare it with the use of refernce.
    func_pointer(&a);  // passed the address
    func_reference(a);  // passed the refernce
    
    cout<<"og: "<<b<<endl;
    
    // references are much better when you are working with original value...
    // pointer are better when working with original address....
    
    
    return 0;
}