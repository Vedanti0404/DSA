#include<bits/stdc++.h>
using namespace std;
void print_mat(int mat[3][3],int row,int col){
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int mat[3][3] = {4,8,5,9,2,7,6,3,1};
     print_mat(mat,3,3);
   
return 0;
}