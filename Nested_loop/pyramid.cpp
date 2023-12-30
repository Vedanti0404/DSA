//Write a program to print a pyramid pattern using stars
#include<bits/stdc++.h>
using namespace std;

int pattern(int n){
    for (int i = 1; i <= n; i++) {
        
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
       
    }
}
int main(){
   int n;
    cout<<"Enter rows: ";
    cin>>n;
    pattern(n);
return 0;
}