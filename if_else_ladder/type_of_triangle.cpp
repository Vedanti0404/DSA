//Write a program to find the type of a triangle based on its sides.
#include<bits/stdc++.h>
using namespace std;
int triangle(int a, int b, int c){
    if(a==b && b==c ){
        cout<<"It is Equilateral traingle."<<endl;
        return 'E';
        }
       else if(a==b ||  b==c ||c==a ){
        cout<<"It is Isosceles traingle."<<endl;
        return 'I';
        }
        else if(a!=b && b!=c && c!=a){
        cout<<"It is Scalene traingle."<<endl;
        return 'S';
        }
    }

int main(){
    int a,b,c;
    cout<<"Enter the 3 sides of the triangle: ";
    cin>>a>>b>>c;
    triangle(a,b,c);
    
return 0;
}