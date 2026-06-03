// Merge Two Linked List

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* insertNode(node* head, int value) {
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
    return head;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* mergeSortedLists(node* l1, node* l2) {
    node* dummy = new node();
    dummy->data = 0;
    dummy->next = NULL;
    node* tail = dummy;

    while (l1 != NULL && l2 != NULL) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL) {
        tail->next = l1;
    } else {
        tail->next = l2;
    }

    node* result = dummy->next;
    delete dummy;
    return result;
}

int main() {
    node* head1 = NULL;
    node* head2 = NULL;

    int n1, n2;
    if (!(cin >> n1)) return 0;
    for (int i = 0; i < n1; i++) {
        int val;
        cin >> val;
        head1 = insertNode(head1, val);
    }

    if (!(cin >> n2)) return 0;
    for (int i = 0; i < n2; i++) {
        int val;
        cin >> val;
        head2 = insertNode(head2, val);
    }

    node* mergedHead = mergeSortedLists(head1, head2);
    display(mergedHead);

    return 0;
}
