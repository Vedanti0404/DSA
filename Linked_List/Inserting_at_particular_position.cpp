#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

Node* create_LL(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=create_LL(arr,index+1,size);
    return temp;
}


int main(){
     Node *head;
    head=NULL;
    int arr[]={2,4,6,8,10};
    head=create_LL(arr,0,5);

    int x=3;
    int val=30;
    Node *temp=head;
    x--;
    while(x--){
        temp=temp->next;
    };
    Node *temp2=new Node(val);
    temp2->next=temp->next;
    temp->next=temp2;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
return 0;
}