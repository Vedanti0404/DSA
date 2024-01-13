#include<bits/stdc++.h>
using namespace std;

// 1) For rotation in 90 degree clockwise
void rotate90clock(int arr[][100], int n) {
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

// 2) For rotation in 90 degree anticlockwise
void rotate90anticlock(int arr[][100], int n) {
    // Reverse each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(arr[i][j], arr[i][n - 1 - j]);
        }
    }

// Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
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

    int choice;
    cout << "Enter the choice for rotation(1-->Rotate by 90 Degrees Clockwise & 2-->Rotate by 90 Degrees anticlockwise): ";
    cin >> choice;

    switch (choice) {
        case 1:
            rotate90clock(arr, n);
            break;
        case 2:
            rotate90anticlock(arr, n);
            break;
        default:
            cout << "Invalid";
            
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
