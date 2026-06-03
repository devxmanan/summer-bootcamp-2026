// Check if Linked List is Palindrome or not

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

node* reverseList(node* h) {
    node* prev = NULL;
    node* curr = h;
    node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome() {
    if (head == NULL || head->next == NULL) return true;

    // Find middle
    node* slow = head;
    node* fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    node* secondHalfHead = reverseList(slow->next);

    // Compare halves
    node* first = head;
    node* second = secondHalfHead;
    bool result = true;
    while (second != NULL) {
        if (first->data != second->data) {
            result = false;
            break;
        }
        first = first->next;
        second = second->next;
    }

    // Restore list (optional but good practice)
    slow->next = reverseList(secondHalfHead);

    return result;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insertNode(val);
    }

    if (isPalindrome()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
