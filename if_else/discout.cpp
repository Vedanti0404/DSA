//Write a program to calculate the discount on a purchase based on the total amount.
#include<bits/stdc++.h>
using namespace std;
int main(){
    long int total;
    long int discount=0.0;
    cout << "Enter the total amount: ";
    cin >> total;
     if (total >= 100) {
        discount = 0.10 * total; 
    }
    long int finalAmount = total - discount;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount to Pay: " << finalAmount << endl;


return 0;
}