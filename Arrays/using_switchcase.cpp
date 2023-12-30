////insertion, deletion,searching,reverse,rotation in an array using switch cases

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
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int option;
    while (true) {
        cout << "Select an option:" << endl;
        cout << "1) Insertion\n2) Deletion\n3) Searching\n4) Reverse\n5)Roatation\n6)Exit" << endl;

        cin >> option;

        switch (option) {
            case 1: {
                int v, index;
                cout << "Enter the value you want to insert: ";
                cin >> v;
                cout << "Enter the index where you want to insert: ";
                cin >> index;
                insertion(arr, n, size, v, index);
                break;
            }

            case 2: {
                int index;
                cout << "Enter the index of the element you want to delete: ";
                cin >> index;
                deletion(arr, n, index);
                break;
            }

            case 3: {
                int target;
                cout << "Enter the element you want to search for: ";
                cin >> target;
                int result = search(arr, n, target);
                if (result != -1) {
                    cout << "Element " << target << " found at index " << result << endl;
                } else {
                    cout << "Element " << target << " not found in the array." << endl;
                }
                break;
            }

            case 4:
                 reverse_arr(arr, n);
                cout << "Array after reversing:" << endl;
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 5:
            int r;
             cout<<"Enter the number of rotations: ";
             cin>>r;
             rotation(arr,n,r);
             cout<<"Array after rotation: ";
             for (int i = 0; i < n; i++) {
             cout << arr[i] << " ";
              }

            case 6: option = 6;
                 break;

            default:
               cout << "wrong option, Please enter again" << endl;
    }
  }
  cout << "The program has ended !!!" << endl;

 

    return 0;
}