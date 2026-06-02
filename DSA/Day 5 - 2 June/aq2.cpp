//Count the nodes in a singly linked list

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void insertNode(){
    node* newNode = new node();
    cin>>newNode->data;
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

void countNodes(){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout<<count<<endl;
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        insertNode();
    }
    countNodes();
    return 0;
}