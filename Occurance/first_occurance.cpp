#include<bits/stdc++.h>
using namespace std;

int first_occ(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            index = mid;
            high = mid - 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return index;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the values of the array (in sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want the first occurrence of: ";
    cin >> key;
   first_occ(arr, n, key);

    if ( (first_occ(arr, n, key))!= -1) {
        cout << "The element is present at index: " <<first_occ(arr, n, key)<< endl;
    }
     else {
        cout << "The element is not present in the array." << endl;
    }

    return 0;
}
