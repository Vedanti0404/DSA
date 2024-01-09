#include <bits/stdc++.h>
using namespace std;

void rev(int mat[][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col / 2; j++) {
            swap(mat[i][j], mat[i][col - 1 - j]);
        }
    }
}

int main() {
    int mat[3][3] = {1,2,3,4,5,6,7,8,9};
    rev(mat, 3, 3);

    cout << "Matrix after reversing rows:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
