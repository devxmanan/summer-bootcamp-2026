// Group wise merge

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node {
    int data;
    node* next;
};

struct Compare {
    bool operator()(node* a, node* b) {
        return a->data > b->data;
    }
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

node* mergeKLists(vector<node*>& lists) {
    priority_queue<node*, vector<node*>, Compare> pq;

    for (node* l : lists) {
        if (l != NULL) {
            pq.push(l);
        }
    }

    node* dummy = new node();
    dummy->data = 0;
    dummy->next = NULL;
    node* tail = dummy;

    while (!pq.empty()) {
        node* minNode = pq.top();
        pq.pop();

        tail->next = minNode;
        tail = tail->next;

        if (minNode->next != NULL) {
            pq.push(minNode->next);
        }
    }

    node* result = dummy->next;
    delete dummy;
    return result;
}

int main() {
    int k;
    if (!(cin >> k)) return 0;

    vector<node*> lists(k, NULL);
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            lists[i] = insertNode(lists[i], val);
        }
    }

    node* mergedHead = mergeKLists(lists);
    display(mergedHead);

    return 0;
}
