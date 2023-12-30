//Write a function to calculate the area of a triangle.
#include <iostream>
using namespace std;

float triangle(int base, int height) {
    float area = (0.5) * base * height;
    return area;
}

int main() {
    float base, height;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;

    float area = triangle(base, height);
    cout << "Area of the triangle is: " << area << endl;

    return 0;
}
