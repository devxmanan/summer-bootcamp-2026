//Replace node at a given index in a doubly linked list

//Approach
// 1. Create Doubly Linked list
// 2. Traverse from head
// 3. Count Nodes
// 4. When Count == target index, update the data
// 5. Print the list

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


void display(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void replaceNode(int index, int data){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        if(count == index){
            temp->data = data;
            break;
        }
        temp = temp->next;
        count++;
    }
}


int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        insertNode();
    }
    int index, data;
    cin>>index>>data;
    replaceNode(index,data);
    display();
    
    return 0;
}
