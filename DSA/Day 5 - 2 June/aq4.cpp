//Reverse a doubly linked list


#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head = NULL;


void insertNode(){
    node* newNode = new node();
    cin>>newNode->data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void reverseList(){
    node* temp = head;
    node* prev = NULL;
    node* next = NULL;
    while(temp != NULL){
        next = temp->next;
        temp->next = prev;
        temp->prev = next;
        prev = temp;
        temp = next;
    }
    head = prev;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        insertNode();
    }
    reverseList();
    
    return 0;
}
