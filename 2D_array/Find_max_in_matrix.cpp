#include<bits/stdc++.h>
using namespace std;
void maximum(int mat[][3],int row, int col){
    for(int i = 0;i<row;i++){
            int largest = INT_MIN;
            for(int j=0;j<col;j++){
                
                if(mat[i][j]>largest){
                    largest = mat[i][j];
                }
            }
            cout<<"Largest element of the row "<<i+1<<" is: "<<largest<<endl;
    }
}

int main(){
    int mat[3][3] = {4,8,5,9,2,7,6,3,1};
     maximum(mat,3,3);
return 0;
}