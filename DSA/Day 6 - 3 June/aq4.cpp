//Create a linked list of N nodes having string IDs and delete the nodes which start with a given prefix.

#include <iostream>
using namespace std;

struct Node {
    string id;
    Node * next;
};

Node * head = NULL;

void insertNode(string id){
    Node *newNode = new Node();
    newNode -> id = id;
    newNode -> next = NULL;
    if(!head){
        head = newNode;
    } else {
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void display(){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->id<<endl;
        temp = temp->next;
    }
}

