// Circular double ended queue implementation using linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

struct CircularDeque {
    Node* front;
    Node* rear;

    CircularDeque() : front(nullptr), rear(nullptr) {}

    bool isEmpty() const {
        return front == nullptr;
    }

    void insertFront(int value) {
        Node* node = new Node{value, nullptr, nullptr};
        if (isEmpty()) {
            node->next = node;
            node->prev = node;
            front = rear = node;
        } else {
            node->next = front;
            node->prev = rear;
            front->prev = node;
            rear->next = node;
            front = node;
        }
    }

    void insertRear(int value) {
        Node* node = new Node{value, nullptr, nullptr};
        if (isEmpty()) {
            node->next = node;
            node->prev = node;
            front = rear = node;
        } else {
            node->next = front;
            node->prev = rear;
            rear->next = node;
            front->prev = node;
            rear = node;
        }
    }

    bool deleteFront() {
        if (isEmpty())
            return false;
        Node* temp = front;
        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
            front->prev = rear;
            rear->next = front;
        }
        delete temp;
        return true;
    }

    bool deleteRear() {
        if (isEmpty())
            return false;
        Node* temp = rear;
        if (front == rear) {
            front = rear = nullptr;
        } else {
            rear = rear->prev;
            rear->next = front;
            front->prev = rear;
        }
        delete temp;
        return true;
    }

    int getFront() const {
        return isEmpty() ? -1 : front->data;
    }

    int getRear() const {
        return isEmpty() ? -1 : rear->data;
    }

    void display() const {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return;
        }
        Node* curr = front;
        cout << "Deque: ";
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != front);
        cout << endl;
    }
};

int main() {
    CircularDeque dq;
    int choice;

    do {
        cout << "\nCircular Deque Operations:\n"
             << "1. Insert Front\n"
             << "2. Insert Rear\n"
             << "3. Delete Front\n"
             << "4. Delete Rear\n"
             << "5. Get Front\n"
             << "6. Get Rear\n"
             << "7. Display Deque\n"
             << "8. Is Empty?\n"
             << "0. Exit\n"
             << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to insert at front: ";
                cin >> value;
                dq.insertFront(value);
                cout << "Inserted " << value << " at front." << endl;
                break;
            }
            case 2: {
                int value;
                cout << "Enter value to insert at rear: ";
                cin >> value;
                dq.insertRear(value);
                cout << "Inserted " << value << " at rear." << endl;
                break;
            }
            case 3:
                if (dq.deleteFront())
                    cout << "Deleted front element." << endl;
                else
                    cout << "Deque is empty. Cannot delete front." << endl;
                break;
            case 4:
                if (dq.deleteRear())
                    cout << "Deleted rear element." << endl;
                else
                    cout << "Deque is empty. Cannot delete rear." << endl;
                break;
            case 5:
                cout << "Front element: " << dq.getFront() << endl;
                break;
            case 6:
                cout << "Rear element: " << dq.getRear() << endl;
                break;
            case 7:
                dq.display();
                break;
            case 8:
                cout << (dq.isEmpty() ? "Deque is empty." : "Deque is not empty.") << endl;
                break;
            case 0:
                cout << "Exiting." << endl;
                break;
            default:
                cout << "Invalid option. Try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
