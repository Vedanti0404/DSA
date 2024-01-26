#include<bits/stdc++.h>
using namespace std;
int main(){
    //Allocate heap memory for variable.
        int *ptr=new int;
        *ptr=5;       //value assign
        cout<<ptr<<endl;

        float *ptr1=new float;
        *ptr1=3.68;
        cout<<ptr1;

        int n;
        cout<<"\nEnter size of array: ";
        cin>>n;
        int *p=new int[n];
//Put values

for(int i=0;i<n;i++){
    p[i]=i+1;
}
for(int i=0;i<n;i++){
    cout<<p[i]<<endl;
}
    

    //delete keyword:releases the heap memory occupied by the datatype

    delete ptr;
    delete ptr1;
    delete[] p;

return 0;
}