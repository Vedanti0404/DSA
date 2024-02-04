#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int x,int index,int n){
    if (index == n) {
        return false;
    }

    if (arr[index] == x) {
        return true;
    }
    return search(arr, x, index + 1, n);
}

int main() {
    const int n = 5;  
    int arr[] = {1, 2, 3, 4, 5};
    int x = 3;  
    if (search(arr, x, 0, n)) {
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}