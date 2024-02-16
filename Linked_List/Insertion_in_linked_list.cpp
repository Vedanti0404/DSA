#include <bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *next;
    public:
        Node()=default; //main function user.
        //formation of an independent.
        Node(int data){
            cout<<"this node is created at: "<<this<<endl;
            this->data = data;
            next = NULL; // NULL POINTER
        }
        void insert_element();
        void print_ll(Node *head);
}*head;

//print the linked list
void Node::print_ll(Node *head){
    //recursvie traversal
    Node *cur = head;
    if(cur==NULL) return;
    cout<<cur->data<<" ";
    print_ll(cur->next);
}

void Node::insert_element(){
    cout<<"\n\nEnter the value to be inserted: ";
    int value;
    cin>>value;
    Node *temp = new Node(value); // this will create a node;

    //now putting the node in linkedlist
    if(head==NULL){
        cout<<"The Linked list is empty!\ncreating the first node with value:"<<value<<endl;
        head = temp; // the linked list is now created 
        print_ll(head);
    }
    else{
        temp->next = head;
        head = temp;
               
        print_ll(head);
    }
}
int main()
{
    bool flag = true;
    Node *user =  new Node;
    user->insert_element();
    user->insert_element();
    user->insert_element();
    return 0;
} 