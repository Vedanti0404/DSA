#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b, int &c, int count) {
    if (count == 0)
        return;
    
    int temp = a;
    a = b;
    b = c;
    c = temp;

    swap(a, b, c, count - 1);
}

int main(){
  int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    swap(a, b, c, 1);  
    cout << "After swapping:  " << a <<  b << c << endl;

return 0;
}