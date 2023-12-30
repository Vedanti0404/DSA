/*
1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 

2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

5: What will be the result below according to the precedence table.

    2*3-48==5/4*6
    6<<2-4*8/2
    5>4<3/2-8%4+5
    14-8+92>>2+70


*/

#include<bits/stdc++.h>
using namespace std;
void temperature(){
    int n=89;
    if(n>70 && n<90){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

void even_positive(){
    int n=64;
    if(n>0 && n%2==0){
     cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}

void teenager(){
    int n=15;
    if(n>=13 && n<=19){
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;
}

void greatest(){
    int a,b,c;
    cout<<"Enter 3 nos: ";
    cin>>a>>b>>c;
    if(a>b &&a>c){
        cout<<"yes"<<endl;
    }
else{
    cout<<"no"<<endl;
}

}

void precedence(){
    int result1 = 2 * 3 - 48 == 5 / 4 * 6;
    int result2 = 6 << (2 - 4 * 8 / 2);
    int result3 = (5 > 4) < 3 / 2 - 8 % 4 + 5;
    int result4 = 14 - 8 + 92 >> (2 + 70);
    cout << "Result 1: " << result1 <<endl;
    cout << "Result 2: " << result2 <<endl;
    cout << "Result 3: " << result3 <<endl;
    cout << "Result 4: " << result4 <<endl;

}
int main(){
    temperature();
    even_positive();
    teenager();
    greatest();
    precedence();
return 0;
}