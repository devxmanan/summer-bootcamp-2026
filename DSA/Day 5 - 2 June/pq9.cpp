// Cloning of a Linked List

#include <iostream>
#include <vector>
using namespace std;

struct node {
    int data;
    node* next;
    node* random;
};

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << "[Data: " << temp->data;
        if (temp->random != NULL) {
            cout << ", Random: " << temp->random->data;
        } else {
            cout << ", Random: NULL";
        }
        cout << "] -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node* cloneLinkedList(node* head) {
    if (head == NULL) return NULL;

    // Step 1: Interweave cloned nodes
    node* curr = head;
    while (curr != NULL) {
        node* clone = new node();
        clone->data = curr->data;
        clone->next = curr->next;
        clone->random = NULL;
        curr->next = clone;
        curr = clone->next;
    }

    // Step 2: Assign random pointers for cloned nodes
    curr = head;
    while (curr != NULL) {
        if (curr->random != NULL) {
            curr->next->random = curr->random->next;
        }
        curr = curr->next->next;
    }

    // Step 3: Separate original and cloned lists
    curr = head;
    node* dummy = new node();
    node* cloneTail = dummy;
    while (curr != NULL) {
        node* clone = curr->next;
        curr->next = clone->next;
        cloneTail->next = clone;
        cloneTail = clone;
        curr = curr->next;
    }

    node* clonedHead = dummy->next;
    delete dummy;
    return clonedHead;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<node*> nodes(n);
    vector<int> randomIndices(n);

    // Create the nodes
    for (int i = 0; i < n; i++) {
        nodes[i] = new node();
        cin >> nodes[i]->data;
        nodes[i]->next = NULL;
        nodes[i]->random = NULL;
    }

    // Link the next pointers
    for (int i = 0; i < n - 1; i++) {
        nodes[i]->next = nodes[i + 1];
    }

    // Link the random pointers
    for (int i = 0; i < n; i++) {
        int rIdx;
        cin >> rIdx;
        if (rIdx >= 0 && rIdx < n) {
            nodes[i]->random = nodes[rIdx];
        } else {
            nodes[i]->random = NULL;
        }
    }

    node* head = nodes.empty() ? NULL : nodes[0];

    cout << "Original List:" << endl;
    display(head);

    node* clonedHead = cloneLinkedList(head);

    cout << "Cloned List:" << endl;
    display(clonedHead);

    return 0;
}
