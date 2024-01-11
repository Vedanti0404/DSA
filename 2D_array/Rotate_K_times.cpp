#include<bits/stdc++.h>
using namespace std;

void rotate90(int arr[][100], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(arr[i][j], arr[i][n - 1 - j]);
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int arr[100][100];

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int k;
    cout << "Enter the number of rotations: ";
    cin >> k;

    k = k % 4;

    for (int i = 0; i < k; i++) {
        rotate90(arr, n);
    }

    // Display the rotated matrix
    cout << "Rotated Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
