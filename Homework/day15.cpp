/****
 * 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

2: Find the factorial of a number n using a while loop and do a while loop.

3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)

5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

*/
#include<bits/stdc++.h>
using namespace std;
void even(){
int n;
cout << "Enter a n: ";
cin>>n;
int i = 1;
cout << "Even numbers using while loop: ";
    while (i <= n) {
        if (i % 2 == 0) {
           cout << i << " ";
        }
        i++;
    }
    cout <<endl;

   i=1;
   cout << "Even numbers using do-while loop: ";
    do {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    } while (i <= n);
 cout << endl;
}

void factorial(){   

}
int main(){
  even();
  factorial();
return 0;
}