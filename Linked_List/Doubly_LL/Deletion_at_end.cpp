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

void delete_at_end(Node*& head) {
    if (head == NULL) {
        cout << "List is empty. Nothing to delete." << endl;
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* curr = head;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }

    delete curr->next;
    curr->next = NULL;
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

    // Deleting the node at the end
    cout << "Deleting the node at the end." << endl;
    delete_at_end(head);

    // Printing the doubly linked list
    cout << "Doubly Linked List after deletion: ";
    printDLL(head);

    return 0;
}
