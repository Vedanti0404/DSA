#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int i,int n,int key){
    if(key==0)
    return 1;
    if(i==n || key<n)
    return 0;
    return find(arr,i+1,n,key )|| find(arr,i+1,n,key-arr[i]);
}
int main(){
    int arr[] = {1,2,3,4}; 
    int n = 4; 
    int key = 10; 
    int i=0;

   
        cout << find(arr, i, n, key) << endl;


return 0;
}