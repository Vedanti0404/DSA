#include<bits/stdc++.h>
using namespace std;
class Print_array{
    public:
    int n;
    void print(int arr[],int index,int n){
        if(index==n){
            return;
        }
        cout<<arr[index]<<" ";
        print(arr, index+1, n);
    }

    void print1(int arr[],int index,int n){
        if(index==-1){
            return;
        }
        cout<<arr[index]<<" ";
        print1(arr, index-1, n);
    }
};
int main(){
    Print_array obj;
    int n=5;
    int arr[] = {3, 7, 6, 2, 8};
    obj.print(arr,0,n);
    cout << endl;
    obj.print1(arr,n-1,n);
    cout<<endl;

return 0;
}