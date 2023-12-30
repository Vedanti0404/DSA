//find the smallest and largest element in array
#include <bits/stdc++.h>
using namespace std;
//smallest
int smallest(int arr[], int n) {
    int smallest = INT_MAX; 
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
//second smallest
int second_smallest(int arr[], int n) {
    int second_s = INT_MAX;
    int s = smallest(arr, n);
    for (int i = 0; i < n; i++) {
        if (arr[i] > s && arr[i] < second_s) {
            second_s = arr[i];
        }
    }
    return second_s;
}
//largest
int largest(int arr[], int n) {
    int largest = INT_MIN; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
//second largest
int second_largest(int arr[],int n){
  int second_l = INT_MIN;
  int l = largest(arr, n);
  for(int i=0;i<n;i++){
    if(arr[i]<l && arr[i]>second_l){
      second_l = arr[i];
    }           
  }
  return second_l;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The smallest number is: " << smallest(arr, n) << endl;
    cout << "The largest number is: " << largest(arr, n) << endl;
    cout << "The second largest number is: " << second_largest(arr, n) << endl;
    cout << "The second smallest number is: " << second_smallest(arr, n) << endl;




    return 0;
}
