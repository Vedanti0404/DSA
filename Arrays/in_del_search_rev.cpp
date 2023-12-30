//insertion, deletion,searching,reverse,rotation in an array
#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[], int &n, int size, int v, int index) {
for (int i = n; i > index; i--) {
    arr[i] = arr[i-1];
  }
  arr[index] = v;
  n++;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}



void deletion(int arr[], int &n, int index){
    for (int i = index; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  n--;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}


int search(int arr[],int n,int target){
  for(int i = 0 ;i<n;i++){
    if(target==arr[i]){
      return i;
    }
  }
  return -1;
}


void reverse_arr(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - 1 - i]);
    }
}



void rotation(int arr[],int n,int r){
  for(int i=(n-r);i<n;i++){
    cout<<arr[i]<<" ";
  }
  for(int i=0;i<(n-r);i++){
    cout<<arr[i]<<" ";
  }
}


int main(){
int size = 100;
  int n = 5;
  int arr[size];

  cout << "Enter the values for the array: " << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter the value you want to insert in the array: ";
  int v;
  cin >> v;

  cout << "Enter the index: ";
  int index;
  cin >> index;

  insertion(arr, n, size, v, index);



  cout << "Enter the index of the element you want to delete: ";
  cin >> index;
  deletion(arr, n, index);
  cout << "Enter the element you want to search for: ";
    int target;
    cin >> target;
  search(arr,n,target);
  if (search(arr,n,target) != -1) {
        cout << "Element " << target << " found at index " << search(arr,n,target) << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    reverse_arr(arr, n);
    cout << "Array after reversing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }
    cout << endl;

    int r;
    cout<<"Enter the number of rotations: ";
    cin>>r;
    rotation(arr,n,r);
    cout<<"Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        
    }

  return 0;
}
