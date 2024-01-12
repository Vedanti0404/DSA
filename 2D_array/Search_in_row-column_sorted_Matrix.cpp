#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int>& row, int key) {
    int low = 0, high = row.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (row[mid] == key) {
            return true;
        } else if (row[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

bool search(vector<vector<int>>& matrix, int n, int m, int key) {
    int row = 0, col = m - 1;
    while (row < n && col >= 0) {
        if (matrix[row][col] == key) {
            return true;
        } else if (matrix[row][col] < key) {
            row++;
        } else {
            col--;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the values of array: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Sort the entire matrix based on the first element of each row
    sort(matrix.begin(), matrix.end());

    int key;
    cout << "Enter the key you want to search: ";
    cin >> key;

    int ans = 0;
    int row = 0;

    for (int i = 0; i < n; i++) {
        if (matrix[i][0] <= key && matrix[i][n - 1] >= key) {
            row = i;
            ans = binarySearch(matrix[i], key);
            break;
        }
    }

    cout << "The element is present at: " << row << ", " << ans << "" << endl;

    return 0;
}
