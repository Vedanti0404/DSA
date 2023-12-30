/*
      *
    * *
  * * *   
* * * *

logic-->
row=1
row<-5
print space,5-row times
print * ,row times
row=row+1
*/
#include <iostream>

using namespace std;

int main() {

  // Print the pattern
  for (int i = 1; i <= 5; i=i+1) {
    for (int j = 1; j <=5-i; j=j+1) 
      cout << " ";
      for(int j=1;j<=i;j=j+1){
        cout<<"*";
      }
    

    cout << endl;
  }

  return 0;
}


