// Detect Loop or cycle in Linked List

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

void createLoop(int pos) {
    if (pos == -1 || head == NULL) return;
    node* loopNode = NULL;
    node* temp = head;
    int index = 0;
    while (temp->next != NULL) {
        if (index == pos) {
            loopNode = temp;
        }
        temp = temp->next;
        index++;
    }
    if (index == pos) {
        loopNode = temp;
    }
    temp->next = loopNode;
}

bool detectLoop() {
    node* slow = head;
    node* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(val);
    }

    int pos;
    cin >> pos;

    createLoop(pos);

    if (detectLoop()) {
        cout << "Loop detected" << endl;
    } else {
        cout << "No loop" << endl;
    }

    return 0;
}
