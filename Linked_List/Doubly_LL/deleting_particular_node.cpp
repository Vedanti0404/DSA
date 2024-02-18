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

void deletion(Node*& head, int pos) {
    if (head == NULL) {
        cout << "List is empty. Deletion not possible." << endl;
        return;
    }

    if (pos < 1) {
        cout << "Invalid position. Deletion not possible." << endl;
        return;
    }

    Node* curr = head;
    for (int i = 1; curr != NULL && i < pos; i++) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Deletion not possible." << endl;
        return;
    }

    if (curr == head) {
        head = curr->next; // Update head if deleting the first node
    }

    if (curr->prev != NULL) {
        curr->prev->next = curr->next;
    }
    if (curr->next != NULL) {
        curr->next->prev = curr->prev;
    }

    delete curr;
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

    // Position of the node to be deleted
    int pos;
    cout << "Enter the position of the node to be deleted: ";
    cin >> pos;

    // Deleting the node at the specified position
    deletion(head, pos);

    // Printing the doubly linked list
    cout << "Doubly Linked List after deletion: ";
    printDLL(head);

    return 0;
}
