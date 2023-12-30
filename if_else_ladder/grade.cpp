//Write a program to calculate the grade of a student based on their marks.
#include<bits/stdc++.h>
using namespace std;
char grade(int n){
    if(n>=90 && n<=100){
        return 'A';
    }
    else if(n>=70 && n<=89){
        return 'B';
    }
    else if(n>=50 && n<=69){
        return 'C';
    }
    else if(n>=30 && n<=49){
        return 'D';
    }
    else if(n>=10 && n<=29){
        return 'F';
    }
} 
int main(){
    int n;
    cout<<"Enter the marks of student: ";
    cin>>n;
    cout<<"The final grade of the student is: "<<grade(n)<<endl;
return 0;
}