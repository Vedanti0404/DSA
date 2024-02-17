#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        data = 0;
        next = NULL;
    }

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node *head;

    LinkedList() {
        head = NULL;
    }

    // Print the linked list
    void print_ll() {
        Node *cur = head;
        while (cur != NULL) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }

    // Insert an element at the beginning of the linked list
    void insert_element_at_start() {
        cout << "Enter the value to be inserted: ";
        int value;
        cin >> value;
        Node *temp = new Node(value);
        temp->next = head;
        head = temp;
        print_ll();
    }

    // Insert an element at the end of the linked list
    void insert_element_at_end() {
        cout << "Enter the value to be inserted: ";
        int value;
        cin >> value;
        Node *temp = new Node(value);
        if (head == NULL) {
            head = temp;
        } else {
            Node *cur = head;
            while (cur->next != NULL) {
                cur = cur->next;
            }
            cur->next = temp;
        }
        print_ll();
    }

    // Delete the first element of the linked list
    void delete_first_element() {
        if (head != NULL) {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        print_ll();
    }

    // Delete the last element of the linked list
    void delete_last_element() {
        if (head == NULL) {
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node *prev = NULL;
        Node *cur = head;
        while (cur->next != NULL) {
            prev = cur;
            cur = cur->next;
        }
        delete cur;
        prev->next = NULL;
        print_ll();
    }

    // Insert an element at a specified position in the linked list
    void insert_at_position(int pos) {
        cout << "Enter the value to be inserted: ";
        int value;
        cin >> value;
        Node *temp = new Node(value);
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            temp->next = head;
            head = temp;
            print_ll();
            return;
        }
        Node *cur = head;
        for (int i = 1; i < pos - 1 && cur != NULL; ++i) {
            cur = cur->next;
        }
        if (cur == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }
        temp->next = cur->next;
        cur->next = temp;
        print_ll();
    }

    // Delete an element at a specified position in the linked list
    void delete_at_position(int pos) {
        if (pos <= 0 || head == NULL) {
            cout << "Invalid operation!" << endl;
            return;
        }
        if (pos == 1) {
            Node *temp = head;
            head = head->next;
            delete temp;
            print_ll();
            return;
        }
        Node *cur = head;
        Node *prev = NULL;
        for (int i = 1; i < pos && cur != NULL; ++i) {
            prev = cur;
            cur = cur->next;
        }
        if (cur == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }
        prev->next = cur->next;
        delete cur;
        print_ll();
    }
};

int main() {
    LinkedList list;
    int choice;
    do {
        cout << "\n1. Insert at start\n2. Insert at end\n3. Delete first\n4. Delete last\n5. Insert at position\n6. Delete at position\n7. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                list.insert_element_at_start();
                break;
            case 2:
                list.insert_element_at_end();
                break;
            case 3:
                list.delete_first_element();
                break;
            case 4:
                list.delete_last_element();
                break;
            case 5:
                int position;
                cout << "Enter position: ";
                cin >> position;
                list.insert_at_position(position);
                break;
            case 6:
                int del;
                cout << "Enter position: ";
                cin >> del;
                list.delete_at_position(del);
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}
