#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int height[n];

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int water = 0;
    int maxleft = 0, maxright = 0, index = 0;

    // for find index of the maximum height
    for (int i = 1; i < n; i++) {
        if (height[i] > height[index]) {
            index = i;
        }
    }

    // Left part
    for (int i = 0; i < index; i++) {
        if (maxleft > height[i]) {
            water += maxleft - height[i];
        } else {
            maxleft = height[i];
        }
    }

    // Right part
    for (int i = n - 1; i > index; i--) {
        if (maxright > height[i]) {
            water += maxright - height[i];
        } else {
            maxright = height[i];
        }
    }

    cout << "Trapped Water: " << water << endl;

    return 0;
}
