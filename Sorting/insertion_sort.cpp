#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
               
            }
        }
    }
}
int main(){
     int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
