//Write a program to print the elements of a vector
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> num;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        num.push_back(element);
    }

    cout << "Elements of the vector: ";
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }

    return 0;
}
