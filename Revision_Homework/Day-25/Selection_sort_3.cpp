#include <iostream>
using namespace std;

class Selection {
public:
    void sort(char arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min_index]) {
                    min_index = j;
                }
            }
            swap(arr[min_index], arr[i]);
        }
    }
};

int main() {
    Selection obj;
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    char arr[n];
    cout << "Enter the characters:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    obj.sort(arr, n);
    
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
