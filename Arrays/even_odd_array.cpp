#include<bits/stdc++.h>
using namespace std;
void even_odd(int arr[],int size){
cout << "Even numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
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

   
    even_odd(arr,n);
return 0;
}