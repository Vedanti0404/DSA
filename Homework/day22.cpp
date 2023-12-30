/***
 * 1: Take 20 elements from user input and find its sum with the help of an array.

2: Calculate the average of elements in an array of size 18.

3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

5: Find the second largest element in an array of unique elements of size n. Where n>3.

6: Find the third smallest element in an array of unique elements size n. Where n>3.

*/
#include<bits/stdc++.h>
using namespace std;
void findSum() {
    int array[20];
    cout << "Enter 20 elements:" << endl;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        cin >> array[i];
        sum += array[i];
    }
    cout << "Sum of the elements: " << sum << endl;
}

// Function to calculate the average of elements in an array of size 18
void calculateAverage() {
    const int size = 18;
    int array[size];
    cout << "Enter 18 elements:" << endl;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
        sum += array[i];
    }
    double average = static_cast<double>(sum) / size;
    cout << "Average of elements: " << average << endl;
}

// Function to find the index of a specific element in an array
void findElementIndex() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];
    cout << "Enter " << size << " elements:" << endl;

    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    int target;
    cout << "Enter the element to find: ";
    cin >> target;

    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (array[i] == target) {
            index = i;
            break;
        }
    }

    cout << "Index of element " << target << ": " << index << endl;
}

void charArray() {
    char array[26];
    for (int i = 0; i < 26; ++i) {
        array[i] = 'a' + i;
    }

    cout << "Array of characters:" << endl;
    for (int i = 0; i < 26; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void findSecondLargest() {
    int n;
    cout << "Enter the size of the array (n > 3): ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " unique elements:" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] < array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Second largest element: " << array[1] << endl;
}

void findThirdSmallest() {
    int n;
    cout << "Enter the size of the array (n > 3): ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " unique elements:" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Third smallest element: " << array[2] << endl;
}
int main(){
   findSum();
    calculateAverage();
    findElementIndex();
    charArray();
    findSecondLargest();
    findThirdSmallest();
return 0;
}