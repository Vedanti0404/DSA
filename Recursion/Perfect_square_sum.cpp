#include<bits/stdc++.h>
using namespace std;
int subset(int arr[],int index,int sum,int n){
    if(sum==0)
    return 1;
    if(sum<0||index==n)
    return 0;
    return subset(arr,index+1,sum,n)+subset(arr,index+1,sum-arr[index],n);
}
int main(){
    int arr[]={2,5,6,1};
    int sum=8;
    cout<<subset(arr,0,sum,4)<<endl;
return 0;
}