//Create a circular queue using array and implement the following operations:
//1. Enqueue
//2. Dequeue
//3. Display
//4. Exit

#include <iostream>
using namespace std;

# define SIZE 5
int q[SIZE];
int front = -1, rear = -1;
void enqueue(int x){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(isEmpty()){
        front = rear = 0;
    }
    else{
        rear = (rear + 1) % SIZE;
    }
    q[rear] = x;
}

void dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % SIZE;
    }
}

void display(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    int i = front;
    while(i != rear){
        cout<<q[i]<<" ";
        i = (i + 1) % SIZE;
    }
    cout<<q[rear]<<endl;
}

bool isFull(){
    return (rear + 1) % SIZE == front;
}

bool isEmpty(){
    return front == -1;
}

int main(){
    int choice,x;
    while(true){
        cin>>choice;
        switch(choice){
            case 1: cin>>x;
                    enqueue(x);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}