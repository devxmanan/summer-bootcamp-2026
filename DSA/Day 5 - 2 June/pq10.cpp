// Flattening a Linked List

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* bottom;
};

node* merge(node* a, node* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;

    node* result;
    if (a->data < b->data) {
        result = a;
        result->bottom = merge(a->bottom, b);
    } else {
        result = b;
        result->bottom = merge(a, b->bottom);
    }
    result->next = NULL; // flatten list uses only bottom pointer
    return result;
}

node* flatten(node* root) {
    if (root == NULL || root->next == NULL) {
        return root;
    }

    // Recur for next list
    root->next = flatten(root->next);

    // Merge current list with the flattened next list
    root = merge(root, root->next);

    return root;
}

void display(node* root) {
    while (root != NULL) {
        cout << root->data << " ";
        root = root->bottom;
    }
    cout << endl;
}

int main() {
    // Example construction of a multi-level list:
    // 5 -> 10 -> 19 -> 28
    // |    |     |     |
    // 7    20    22    35
    // |          |     |
    // 8          50    40
    // |                |
    // 30               45

    int numLists;
    if (!(cin >> numLists)) {
        // Fallback/Default test case if no inputs
        node* head = new node{5, NULL, NULL};
        head->bottom = new node{7, NULL, NULL};
        head->bottom->bottom = new node{8, NULL, NULL};
        head->bottom->bottom->bottom = new node{30, NULL, NULL};

        head->next = new node{10, NULL, NULL};
        head->next->bottom = new node{20, NULL, NULL};

        head->next->next = new node{19, NULL, NULL};
        head->next->next->bottom = new node{22, NULL, NULL};
        head->next->next->bottom->bottom = new node{50, NULL, NULL};

        head->next->next->next = new node{28, NULL, NULL};
        head->next->next->next->bottom = new node{35, NULL, NULL};
        head->next->next->next->bottom->bottom = new node{40, NULL, NULL};
        head->next->next->next->bottom->bottom->bottom = new node{45, NULL, NULL};

        node* flattened = flatten(head);
        display(flattened);
        return 0;
    }

    node* head = NULL;
    node* tail = NULL;

    for (int i = 0; i < numLists; i++) {
        int listSize;
        cin >> listSize;
        node* colHead = NULL;
        node* colTail = NULL;
        for (int j = 0; j < listSize; j++) {
            int val;
            cin >> val;
            node* newNode = new node{val, NULL, NULL};
            if (colHead == NULL) {
                colHead = newNode;
                colTail = newNode;
            } else {
                colTail->bottom = newNode;
                colTail = newNode;
            }
        }
        if (head == NULL) {
            head = colHead;
            tail = colHead;
        } else {
            tail->next = colHead;
            tail = colHead;
        }
    }

    node* flattened = flatten(head);
    display(flattened);

    return 0;
}
