// Count Occurence of an element in a linked list

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

int countOccurrence(int key) {
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(val);
    }

    int key;
    cin >> key;

    cout << countOccurrence(key) << endl;

    return 0;
}
