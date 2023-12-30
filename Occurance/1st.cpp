#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,2,3,4};
    int low=0;
    int high=n-1;
    int mid=0;
    int index=0;
    int key=2;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
           index=mid;
           high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
    }
return 0;
}