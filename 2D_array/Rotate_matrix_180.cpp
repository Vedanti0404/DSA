#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declaring a vector of vectors to represent the matrix
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the Elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col / 2; j++) {
            swap(matrix[i][j], matrix[i][col - 1 - j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col / 2; j++) {
            swap(matrix[j][i], matrix[col - 1 - j][i]);
        }
    }

    // Display the rotated matrix
    cout << "Rotated Matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
