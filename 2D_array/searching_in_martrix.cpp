#include<bits/stdc++.h>
using namespace std;
void search(int mat[][3],int row, int col, int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j] == key){
                cout<<"Element found at: "<<i<<" "<<j<<endl;
                return ;
            }
        }
    }
    cout<<"Element not found"<<endl;
    return;
}
int main(){
   int mat[3][3] = {1,2,3,4,5,6,7,8,9};
     search(mat,3,3,7);
return 0;
}