#include<bits/stdc++.h>
using namespace std;

int Painter(int arr[], int n, int m) {
    if (m > n) {
        return -1;
    }
    int start = 0, end = 0, mid, ans;
    for (int i = 0; i < n; i++) {
        start = max(start, arr[i]);
        end += arr[i];
    }
    while (start <= end) {
        mid = start + (end - start) / 2;
        int painter = 0, count = 1;
        for (int i = 0; i < n; i++) {
            painter += arr[i];
            if (painter > mid) {
                count++;
                painter = arr[i];
            }
        }
        if (count <= m) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    
int n, m;
        cout << "Enter the number of walls: ";
        cin >> n ;

        cout << "Enter the number of painters: ";
        cin >> m ;


        int arr[n];
        cout << "Enter the lengths of walls: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Minimum time required: " << Painter(arr, n, m) << endl;
         return 0;
    }
   