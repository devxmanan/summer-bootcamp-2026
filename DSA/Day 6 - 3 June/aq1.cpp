// Reverse the given linked list and rearrange elements with even elements first and then odd elements.

#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
};
Node *head = NULL;
Node *evenHead, *oddHead, *evenTail, *oddTail;
evenhead = oddHead = evenTail = oddTail = NULL;

void insertNode(){
    Node *newNode = new Node();
    cin>>newNode->val;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
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
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverseList(){
    Node *curr = head
} 