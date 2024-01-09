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

    int ans = 0;

    for (int i = 0; i < n - 2; i++) {
        ans += x - arr[i];

        int start = i + 1, end = n - 1;

        while (start < end) {
            if (arr[start] + arr[end] == ans) {
                cout << "Found elements at positions " << i<< ", " << start<< ", " << end<< endl;
                return 1;
            } else if (arr[start] + arr[end] > ans) {
                end--;
            } else {
                start++;
            }
        }
    }

    cout << "No such elements found." << endl;

    return 0;
}
