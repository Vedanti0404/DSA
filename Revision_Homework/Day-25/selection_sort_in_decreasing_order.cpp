#include <iostream>
using namespace std;

class Selection {
public:
    void sort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int max_index = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[max_index]) {
                    max_index = j;
                }
            }
            swap(arr[max_index], arr[i]);
        }
    }
};

int main() {
    Selection obj;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    obj.sort(arr, n);
    
    cout << "Array sorted in decreasing order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
