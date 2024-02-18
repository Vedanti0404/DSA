#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node *CreateDLL(int arr[], int index, int size, Node *back) 
{
    if (index == size)
        return NULL;
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp);
    return temp;
}


int main() {
    Node *head=NULL;
    int arr[] = {1, 2, 3, 4, 5};
    head = CreateDLL(arr, 0, 5, NULL);

    
    int pos = 2;

    // Insert at the specified position
    if (pos == 0) {
        // Insert at the start
        if (head == NULL) {
            head = new Node(5);
        } else {
            Node* temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    } else {
        Node* curr = head;
        // Go to the node after which we need to insert
        while (--pos) {
            curr = curr->next;
        }

        // Insert at the end
        if (curr->next == NULL) {
            Node* temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // Insert in the middle
        else {
            Node* temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    // Print the updated linked list
    Node *cur = head;
    while (cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
    
    return 0;
}
