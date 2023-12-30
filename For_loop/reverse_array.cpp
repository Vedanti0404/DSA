//Write a program to reverse an array
#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int n){
    int i,temp;
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n- 1 - i];
        arr[n - 1 - i] = temp;
    }
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >>n;

    if (n <= 0) {
    cout << "Invalid array size. Please enter a positive size." <<endl;
        return 1;
    }
    int arr[n];
    cout << "Enter the elements of the array:" <<endl;
    for (int i = 0; i <n; i++) {
       cout << "Enter element " << i + 1 << ": ";
       cin >> arr[i];
    }
    reverse(arr, n);
   cout << "Reversed array: ";
    for (int i = 0; i <n; i++) {
   cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}

