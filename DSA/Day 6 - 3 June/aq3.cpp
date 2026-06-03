//Create a circular linked list and remove the elements whose digit's sum is even.

#include <iostream>
using namespace std;
struct Node {
    int val;
    Node * next;
};

Node *head = NULL;

void insertNode(int val){
    Node *newNode = new Node();
    newNode -> val = val;
    if(!head){
        head = newNode;
        newNode -> next = head;
    } else {
        Node *temp = head;
        do {
            temp = temp->next;
        } while(temp->next != head);
        newNode -> next = head;
        temp->next = newNode;
    }
}

void display(){
    if(!head) return;
    Node *temp = head;
    do{
        cout<<temp->val<<" ";
        temp = temp->next;
    }while(temp != head);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        int sum = 0;
        while (val>0){
            sum += val%10;
            val = val/10;
        }
        if(sum%2 != 0){
            insertNode(val);
        }
    }
    display();
    return 0;
}