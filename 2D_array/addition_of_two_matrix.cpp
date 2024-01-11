#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int mat1[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\n";
   
   int mat2[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

int mat3[3][3];
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           mat3[i][j]=mat1[i][j]+mat2[i][j];
        }

        cout<<endl;
    }
    
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout<<mat3[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}