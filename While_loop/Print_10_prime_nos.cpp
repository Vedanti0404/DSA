//Write a program to print the first 10 prime numbers.
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<=1){
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int count = 0;
    int n = 2; 
    cout << "The first 10 prime numbers are:" <<endl;
    while(count<10){
        if (prime(n)) {
            cout << n <<endl;
            count++;
        }
        n++;
        }
return 0;
}