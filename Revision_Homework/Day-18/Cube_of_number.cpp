#include<bits/stdc++.h>
using namespace std;
int cube(int num) {
    if (num == 0 || num == 1)
        return num;

        return num * num * num;
}
int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = cube(number);
    cout << "Cube of " << number << " is: " << result << endl;

return 0;
}