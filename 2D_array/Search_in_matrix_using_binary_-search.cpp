#include<iostream>

#include<bits/stdc++.h>


using namespace std;

void print_mat(int mat[5][5],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int binary_search(int arr[],int n,int key){
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid = low+(high-low)/2;
        if(arr[mid]==key){
            return mid; //column for that particular row....
        }
        else if(arr[mid]>key){
            // we should move in which direction?? -> left
            high = mid-1;
        }
        else if(arr[mid]<key){
            // we should move in which direction?? -> right
            low = mid+1;
        }
    }
    return -1;
}

pair<int,int> searching(int mat[5][5],int row,int col,int key){
    pair<int,int> p;
    int j;
    for(int i=0;i<row;i++){
        j = binary_search(mat[i],col,key);
        if(j!=-1){
            
            p.first = i; //mat[1][2] from the binary search where j!=-1 (2)
            p.second = j;
            return p;
        }
        else if (j==-1){
            // the row of the matrix do not contain the key..
            continue; // move to the next row -> mat[i+1][and search for j]
        }

        // but what if all the rows don not contain the key?
    }
    p.first =-1;
    p.second =-1;
    return p;
   
}


int main(){
    // only defintion should be done here.
    int mat[5][5];
    int count = 1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat[i][j] = count++;
        }
    }

    //function calls
    print_mat(mat,5,5);

    // searching in 2d array, 
    int key = 15;
    pair<int,int> ans = searching(mat,5,5,key);
    cout<<"the answer is found at "<<ans.first<<" and "<<ans.second<<endl;
    return 0;

}