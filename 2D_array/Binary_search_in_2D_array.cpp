#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100][100]; // Assuming a maximum size for the 2D array
    cout << "Enter the values of array: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int key;
    cout << "Enter the key you want to search: ";
    cin >> key;

    int ans ;
    int row ;

    for (int i = 0; i < n; i++) {
        if (arr[i][0] <= key && arr[i][n - 1] >= key) {
            row = i;
            ans = binary_search(arr[i], n, key);
            break;
        }
    }
        cout << "The element is present at:" << row << ", " << ans << "" << endl;
    

    return 0;
}
