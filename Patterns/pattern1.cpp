//Write a program to print a right triangle pattern using stars
#include<bits/stdc++.h>
using namespace std;
int pattern(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
   
return 0;
}