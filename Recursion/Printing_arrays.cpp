#include<bits/stdc++.h>
using namespace std;
// arr= 3 7 6 2 8
void print(int arr[],int index,int n){
    if(index==n){
        return;
    }
    print(arr, index+1, n);   //---> arr= 8 2 6 7 3
    cout<<arr[index]<<" ";
    //print(arr, index+1, n);   // ---> arr= 3 7 6 2 8
}
int main(){
    int arr[] = {3, 7, 6, 2, 8};
    print(arr,0,5);
return 0;
}