#include <iostream>
using namespace std;

class Selection {
public:
    void sort(int arr[], int n) {
        for (int i = n - 1; i > 0; i--) {
            int max_index = 0; // Initialize max_index to the first element
            for (int j = 1; j <= i; j++) {
                if (arr[j] > arr[max_index]) {
                    max_index = j;
                }
            }
            swap(arr[max_index], arr[i]); // Move the maximum element to the last position
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
    
    cout << "Array sorted in increasing order by moving highest number to last place: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
