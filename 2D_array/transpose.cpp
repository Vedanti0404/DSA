#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){              
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
return 0;
}                                                                                                                                                                                                                