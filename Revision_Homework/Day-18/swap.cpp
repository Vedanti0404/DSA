#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b, int count) {
    
    if (count == 0)
        return;
    
    a = a + b;
    b = a - b;
    a = a - b;

    swap(a, b, count - 1);
}
int main(){
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    swap(a, b, 1);
    cout << "After swapping: "<< a <<  b << endl;

return 0;
}