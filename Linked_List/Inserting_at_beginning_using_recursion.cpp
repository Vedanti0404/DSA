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

Node* create_LL(int arr[],int index,int size,Node *prev){
    if(index==size){
        return prev;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;
    return create_LL(arr,index+1,size,temp);
}
int main(){
     Node *head;
    head=NULL;
    int arr[]={2,4,6,8,10};
    head=create_LL(arr,0,5,head);

    Node *temp;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
return 0;
}