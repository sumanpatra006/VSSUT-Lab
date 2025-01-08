#include<stdio.h>
#include<stdlib.h>

#define max 50

int queue[max];
int rear = -1;
int front = -1;

int isFull(){
    return rear == max -1 ;
}

int isEmpty() {
    return front == -1 || front > rear;
}
 
int enQueue(int value){
    if(isFull()){
        printf("the queue is full\n");
    }else{
        if(front == -1) front = 0;
        rear++;
        queue[rear] = value;
        printf("%d iserted into queue\n",value);
    }
}

int deQueue(){
    if(isEmpty()){
        printf("queue is empty\n");
    }else{
        int value = queue[front];
        front++;
        if(front > rear){
            front = -1;
            rear = -1;
        }
    return value;
    }
}

void display(){
    if(isEmpty()){
        printf("the queue is empty\n");
    }else{
        printf("the values of queue are : ");
        for(int i=front; i<=rear; i++){
            printf("%d ",queue[i]);
        }
    }
    printf("\n");
}

int main(){
    enQueue(5);
    enQueue(7);
    enQueue(10);
    enQueue(11);
    enQueue(15);
    display();
    deQueue();
    deQueue();
    display();
    return 0;
}