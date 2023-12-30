//Write a program to search for an element in an array using a while loop.
#include <iostream>
using namespace std;

bool search(int arr[], int size, int target) {
    int index = 0;
    while (index < size) {
        if (arr[index] == target) {
            return true;
        }
        index++;
    }
    return false;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    if (search(arr, size, target)) {
        cout << target << " is found in the array." << endl;
    } else {
        cout << target << " is not found in the array." << endl;
    }

    return 0;
}
