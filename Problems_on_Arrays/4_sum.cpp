#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of x: ";
    cin >> x;

    for (int i = 0; i < n - 3; i++) {
        int key1 = x - arr[i];

        for (int j = i + 1; j < n - 2; j++) {
            int key2 = key1 - arr[j];
            int start = j + 1, end = n - 1;

            while (start < end) {
                int Sum = arr[start] + arr[end];
                if (Sum == key2) {
                    cout << "Found elements at positions " << i<< ", " << j<< ", " << start << ", " << end << endl;
                    return 1;
                } else if (Sum > key2) {
                    end--;
                } else {
                    start++;
                }
            }
        }
    }

    cout << "No such elements found." << endl;

    return 0;
}
