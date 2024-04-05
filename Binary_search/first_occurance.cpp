#include <iostream>
using namespace std;

int first(int arr[], int key, int n) {
    int start = 0;
    int end = n - 1;
    int index = -1; 
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            index = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
    }
    return index; 
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key you want to search: ";
    cin >> key;
    int result = first(arr, key, n);
    if (result != -1) {
        cout << "First occurrence of " << key << " is at the index: " << result;
    } else {
        cout << "Key not found in the array.";
    }
    return 0;
}
