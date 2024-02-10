#include<bits/stdc++.h>
using namespace std;
void printHello(int n) {
    
    if (n == 0)
        return;

    cout << "Hello Army" << endl;

    printHello(n - 1);
}
int main(){
    int n;
    cout << "Enter the number of times you want to print: ";
    cin >> n;
    printHello(n);
return 0;
}