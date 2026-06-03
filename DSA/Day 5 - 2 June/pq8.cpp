// Addition of two linked list

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

node* addTwoLists(node* l1, node* l2) {
    node* dummyHead = new node();
    dummyHead->data = 0;
    dummyHead->next = NULL;
    node* curr = dummyHead;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int sum = carry;
        if (l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }
        carry = sum / 10;
        node* newNode = new node();
        newNode->data = sum % 10;
        newNode->next = NULL;
        curr->next = newNode;
        curr = curr->next;
    }

    node* result = dummyHead->next;
    delete dummyHead;
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

    node* sumHead = addTwoLists(head1, head2);
    display(sumHead);

    return 0;
}
