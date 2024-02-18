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

void printDLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void delete_at_start(Node*& head) {
    if (head == NULL) {
        cout << "The list is empty. Nothing to delete." << endl;
        return;
    }

    Node* temp = head; // Save the current head
    head = head->next; // Move head to the next node
    if (head != NULL) {
        head->prev = NULL; // Update the prev pointer of the new head
    }
    delete temp; // Delete the original head
}

int main() {
    Node* head = NULL, * tail = NULL;

    // Creating Doubly LL
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        if (head == NULL) {
            head = new Node(arr[i]);
            tail = head;
        } else {
            Node* temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // Deleting the node at the start
    cout << "Deleting the node at the start." << endl;
    delete_at_start(head);

    // Printing the doubly linked list
    cout << "Doubly Linked List after deletion: ";
    printDLL(head);

    return 0;
}
