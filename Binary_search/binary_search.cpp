#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key)
{
  int low = 0;
  int high = n - 1;
  int mid = 0;
  while(low <= high){
    mid = (low+high)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]<key){
      low = mid + 1;
    }
    else if(arr[mid]>key){
      high = mid - 1;
    }
  }
  return -1;
}
int main(){
   int n; 
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the values of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
     int key;
    cout << "Enter the key you want to search: ";
    cin >> key;

 cout<<"The element is present at: "<<binary_search(arr,n,key)<<endl;
  return 0;

} 