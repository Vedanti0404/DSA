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

    cout << "Orignal: ";
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    if (head != NULL) {
       
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node *prev = NULL;
            temp = head;
            while (temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }
            delete temp;
            prev->next = NULL;
        }
    }
    cout << "\nModified : ";
    temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
return 0;
}