#include <bits/stdc++.h>

using namespace std;

// task is to create a switchcase for implementing singly linked list.
class Node
{
private:
    int data;
    Node *next;

public:
    Node(int value)
    {
        data = value;
        next = NULL;
    }

    void print_linked_list(Node *);
    void insert_head(int);
    void insert_tail(int);
    void delete_head();
    void delete_tail();
} *head;

void Node::print_linked_list(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout<<"\n\n\n"<<endl;
}

void Node::insert_head(int value)
{
    Node *temp = new Node(value); // calling the constructor
    // check if linked list is empty
    if (head == NULL)
    {
        cout << "\nThe linked list is Empty\n"
             << endl;
        cout << "creating the node with value: " << value << endl;
        head = temp; // which tells us that the head is only the temp (head is pointing the only node of linked list.)
        print_linked_list(head);
    }
    else if (head != NULL)
    {
        temp->next = head;
        head = temp;
        print_linked_list(head);
    }
}

void Node::insert_tail(int value)
{
    Node *temp = new Node(value);
    if (head == NULL)
    {
        cout << "\nThe linked list is Empty\n"
             << endl;
        cout << "creating the node with value: " << value << endl;
        head = temp; // which tells us that the head is only the temp (head is pointing the only node of linked list.)
        print_linked_list(head);
    }
    else if (head != NULL)
    {
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        } // last node var gheun aala, pudhe kay?
        curr->next = temp;
        print_linked_list(head);
    }
}
void Node::delete_head()
{
    if (head == NULL)
    {
        cout << "\nLinked list is empty, nothing to delete\n" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;
    cout << "The value of the deleted node is: " << temp->data << endl;
    delete temp;
    print_linked_list(head);
}

void Node::delete_tail()
{
    if (head == NULL)
    {
        cout << "\nLinked list is empty, nothing to delete\n" << endl;
        return;
    }

    if (head->next == NULL)
    {
        cout << "The value of the deleted node is: " << head->data << endl;
        delete head;
        head = NULL;
        print_linked_list(head);
        return;
    }

    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    cout << "The value of the deleted node is: " << curr->next->data << endl;
    delete curr->next;
    curr->next = NULL;
    print_linked_list(head);
}


int main()
{
    Node *object = NULL;
    object->insert_head(5);
    object->insert_head(4);
    object->insert_head(3);
    object->insert_tail(6);
    object->insert_tail(7);
    object->insert_tail(8);
    object->delete_head();
    object->delete_head();
    object->delete_tail();
    object->delete_tail();
    object->delete_tail();
    return 0;
}