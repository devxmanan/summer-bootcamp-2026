// Remove a node at a given position of a circular linked list


#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;


void insertNode(int value){
    node* newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void removeNode(int position){
    node* temp = head;
    node* prev = NULL;
    int count = 0;
    while(temp != NULL){
        if(count == position){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        count++;
    }
}


int main(){
    while(1){
        int value;
        cin>>value;
        if(value == -1){
            break;
        }
        insertNode(value);
    }
    int position;
    cin>>position;
    removeNode(position);
    return 0;
}
