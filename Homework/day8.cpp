/*
First Pattern:

       4 4 4 4 4 4
       4 4 4 4 4 4
       4 4 4 4 4 4  
       4 4 4 4 4 4
       4 4 4 4 4 4 


       Second Pattern:
   
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25
       1 4 9 16 25

Third Pattern:
  
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216
    1 8 27 64 125 216

Fourth Pattern:

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K

*/

#include<bits/stdc++.h>
using namespace std;
void pattern_1(){
    int rows = 5;
    int cols = 6;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "4 ";
        }
        cout << endl;
    }
}
void pattern_2(){
    int rows=5;
    int cols=5;
    for(int i=0;i<rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<j*j<<" ";
        }
        cout << endl;
    }
}

void pattern_3(){
    int rows=5;
    int cols=5;
    for(int i=0;i<rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<j*j*j<<" ";
        }
        cout << endl;
    }
}
void pattern_4(){
    int rows=5;
    int cols=6;
    for(int i=0;i<rows;i++){
        for(char j='F';j<='K';j++){
            cout<<j<<" ";
        }
        cout << endl;
    }

    
}
int main(){
   pattern_1();
   pattern_2();  
   pattern_3();
   pattern_4();

return 0;
}