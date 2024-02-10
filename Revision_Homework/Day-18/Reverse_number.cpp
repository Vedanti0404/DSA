#include<bits/stdc++.h>
using namespace std;
int reverse(int n, int rev = 0) {
    if (n == 0)
        return rev;
  
    return reverse(n / 10, rev * 10 + n % 10);
}
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n < -5000 || n > 5000) {
        cout << "Number is not in range.\n";
        return 1; 
    }
int reve = reverse(n);
    cout << "Reverse of " << n << " is: " << reve<< endl;

return 0;
}