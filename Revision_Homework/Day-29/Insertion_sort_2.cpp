#include <iostream>
#include <vector>

using namespace std;

class InsertionSort {
public:
    // Constructor
    InsertionSort(vector<int>& arr) : array(arr) {}

    // Function to sort the array in increasing order starting from the last element
    void sortFromEnd() {
        int n = array.size();
        for (int i = n - 2; i >= 0; --i) {
            int key = array[i];
            int j = i + 1;
            // Move elements of array[i+1..n-1], that are greater than key,
            // to one position ahead of their current position
            while (j < n && array[j] < key) {
                array[j - 1] = array[j];
                ++j;
            }
            array[j - 1] = key;
        }
    }

    // Function to print the sorted array
    void printArray() {
        for (int i = 0; i < array.size(); ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

private:
    vector<int>& array;
};

int main() {
    // Sample array
    vector<int> arr = {12, 11, 13, 5, 6};

    // Creating an InsertionSort object
    InsertionSort sorter(arr);

    // Sorting the array in increasing order starting from the last element
    sorter.sortFromEnd();

    // Printing the sorted array
    cout << "Sorted array in increasing order from the last element: ";
    sorter.printArray();

    return 0;
}
