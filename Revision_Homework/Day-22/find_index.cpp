#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& arr, int element, int index = 0) {
    if (index == arr.size()) {
        return -1;
 }
 if (arr[index] == element) {
        return index; 
    }
    return find(arr,element,index+1);
}
int main(){
 int size, element;
 cout<<"Enter the size of array: ";
 cin>>size;

 vector<int>arr(size);
 cout<<"Enter "<<size<<" elements: ";
 for(int i=0;i<size;i++){
    cin>>arr[i];
 }

 cout<<"Enter the element you want to search in the array: ";
 cin>>element;

 int index=find(arr,element);
 if(index==-1){
    cout<<"Element not found in the array."<<endl;
 }
 else{
    cout<<"Element found at "<<index<<endl;
 }
return 0;
}