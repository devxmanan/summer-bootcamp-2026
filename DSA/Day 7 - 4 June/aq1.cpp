//Create a Queue using Linked List and find sum
#include <iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
};

Node *front = NULL, *rear= NULL;

void enqueue(int val){
    Node *newNode = new Node();
    newNode->val = val;
    newNode->next = NULL;
    rear = newNode;
    if(!front){
        front = newNode;
    } else {
        Node*temp = front;
        while(temp->next){
            temp=temp->next;
        }
        temp->next = newNode;
    }
}

int dequeue(){
    if(!front) return 0;
    Node *dequeued = front;
    if(front == rear){
        rear = NULL;
    }
    front = front->next;

    int val = dequeued->val;
    delete dequeued;
    return val;
}

int main(){
    int n;
    cin>>n;
    for(int i =1; i<=n; i++){
        int val;
        cin>>val;
        enqueue(val);
    }
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum+= dequeue();
    }
    cout<<sum<<endl;
    return 0;

}