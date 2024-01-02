/*1: Selection Sort Algorithm to sort the array of integers in decreasing order.

2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

3: Selection Sort Algorithm to sort the array of char in ascending order.
*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void selectionSortDecreasing(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
        }
    }
}

void selectionSortIncreasing(int arr[], int n) {
    for (int i = n - 1; i > 0; --i) {
        int maxIndex = i;

        for (int j = i - 1; j >= 0; --j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
        }
    }
}

void selectionSortCharDescending() {
    int n;
    cout << "Enter the number of characters in the array: ";
    cin >> n;

    char charArr[MAX_SIZE];

    cout << "Enter the characters of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> charArr[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;

        for (int j = i + 1; j < n; ++j) {
            if (charArr[j] > charArr[maxIndex]) {
                maxIndex = j;
            }
        }

        if (maxIndex != i) {
            swap(charArr[i], charArr[maxIndex]);
        }
    }

    cout << "Array after sorting in descending order: ";
    for (int i = 0; i < n; ++i) {
        cout << charArr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int intArr[MAX_SIZE];
    char charArr[MAX_SIZE];

    cout << "Enter the integers of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> intArr[i];
    }

    selectionSortDecreasing(intArr, n);
    cout << "Array after sorting in decreasing order: ";
    for (int i = 0; i < n; ++i) {
        cout << intArr[i] << " ";
    }
    cout << "\n";

    cout << "Enter the characters of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> charArr[i];
    }

    selectionSortCharDescending();
    cout << "\n";

    return 0;
}
