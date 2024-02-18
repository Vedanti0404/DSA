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

void insertion_at_start(Node*& head, int value) {
    Node* temp = new Node(value);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp;
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

    // element to be inserted at the start
    int value;
    cout << "Enter the value to be inserted at the start: ";
    cin >> value;

    insertion_at_start(head, value);

    // Printing the doubly linked list
    cout << "Doubly Linked List: ";
    printDLL(head);

    return 0;
}
