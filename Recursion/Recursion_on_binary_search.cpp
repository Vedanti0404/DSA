#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int x, int start, int end) {
    if (start == end) {
        return false;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == x) {
        return true;
        
    } else if (arr[mid] < x) {
        
        return search(arr, x, mid + 1, end);
    } else {
       
        return search(arr, x, start, mid);
    }
}

int main() {
    const int n = 5;  
    int arr[] = {1, 2, 3, 4, 5};
    int x = 3;  

  
    if (search(arr, x, 0, n - 1)) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
