//Write a program to add two vectors.
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> vector1, vector2, ans;
    int size;
    cout << "Enter the size of vector 1: ";
    cin >> size;
    cout << "Enter " << size << " elements for vector 1: ";
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        vector1.push_back(element);
    }
    cout << "Enter " << size << " elements for vector 2: ";
    for (int i = 0; i < size; i++) {
        int element;
        cin >> element;
        vector2.push_back(element);
    }
    for (int i = 0; i < size; i++) {
        ans.push_back(vector1[i] + vector2[i]);
    }
    cout << "Sum of the vectors: ";
    for (int element : ans) {
        cout << element << " ";
    }

    return 0;
}
