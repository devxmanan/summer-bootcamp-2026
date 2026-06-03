// Remove Kth Node from a linked list

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

void display() {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeKthNode(int k) {
    if (head == NULL || k <= 0) return;

    if (k == 1) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node* temp = head;
    node* prev = NULL;
    int count = 1;

    while (temp != NULL && count < k) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        delete temp;
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(val);
    }

    int k;
    cin >> k;

    removeKthNode(k);
    display();

    return 0;
}
