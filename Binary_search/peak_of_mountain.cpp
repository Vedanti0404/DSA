#include<bits/stdc++.h>
using namespace std;

int peak(int arr[], int n) 
{
    int start = 0, end = n - 1, mid;

    while (start <= end) 
    {
        mid = (start+end) / 2;

        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[mid] > arr[mid - 1])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}
int main()
  
    {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    int index = peak(arr, n);
        cout << "Peak element found at index: " << index << endl;
 return 0;
}
