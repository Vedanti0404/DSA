//Write a program to calculate the sum of all the elements in an array.
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n) {
    int sum=0;
    for (int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
    cout << "Enter elements "<<i+1<<":";
    cin >> arr[i];
    }
    int sum_of_array=sum(arr,n);
    cout<<"Sum of elements in the array is: "<<sum_of_array<<endl;
return 0;
}