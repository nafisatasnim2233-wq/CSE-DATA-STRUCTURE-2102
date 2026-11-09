#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head = NULL;

    void insertAtPosition(int value, int pos) {
        if (pos < 1) return;

        Node* newNode = new Node(value);

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    LinkedList list;

    list.insertAtPosition(10, 1);
    list.insertAtPosition(20, 2);
    list.insertAtPosition(30, 3);
    list.insertAtPosition(15, 2);

    list.display();
    return 0;
}