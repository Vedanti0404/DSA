#include <bits/stdc++.h>
using namespace std;

class InsertionSort {
public:
    // Constructor
    InsertionSort(vector<int>& arr) : array(arr) {}

    // Function to sort the array in decreasing order
    void sortDescending() {
        int n = array.size();
        for (int i = 1; i < n; ++i) {
            int key = array[i];
            int j = i - 1;
            // Move elements of array[0..i-1], that are greater than key,
            // to one position ahead of their current position
            while (j >= 0 && array[j] < key) {
                array[j + 1] = array[j];
                j = j - 1;
            }
            array[j + 1] = key;
        }
    }

    // Function to print the sorted array
    void printArray() {
        for (int i = 0; i < array.size(); ++i) {
            cout << array[i] << " ";
        }
        cout <<endl;
    }

private:
    vector<int>& array;
};

int main() {
    // Sample array
    std::vector<int> arr = {12, 11, 13, 5, 6};

    // Creating an InsertionSort object
    InsertionSort sorter(arr);

    // Sorting the array in decreasing order
    sorter.sortDescending();

    // Printing the sorted array
    std::cout << "Sorted array in decreasing order: ";
    sorter.printArray();

    return 0;
}
