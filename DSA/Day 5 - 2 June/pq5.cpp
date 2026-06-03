// Convert Singly Linked List to Circular Linked List.

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void insertNode(int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void convertToCircular() {
    if (head == NULL) return;
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
}

void displayCircular(int limit) {
    if (head == NULL) return;
    node* temp = head;
    for (int i = 0; i < limit; i++) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(val);
    }

    convertToCircular();
    // Display twice the length to demonstrate circular behavior
    displayCircular(2 * n);

    return 0;
}
