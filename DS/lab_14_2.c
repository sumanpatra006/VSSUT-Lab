#include<stdio.h>
#include<stdlib.h>

#define max 50;

struct node{
    int data ;
    struct node* next;
};

struct queue{
    struct node* front ;
    struct node* rear;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data ;
    newNode->next = NULL;
    return newNode;
}

struct queue* createQueue(){
    struct queue* q = (struct queue*)malloc(sizeof(struct queue));
    q->front = NULL;
    q->rear = NULL;
}

void enQueue(struct queue* queue,int value){
    struct node* newNode = createNode(value);
    if(queue->rear == NULL){
        queue->front = queue->rear = newNode;
        printf("inserted value into queue\n");
        return ;
    }
    queue->rear->next = newNode;
    queue->rear = newNode;
    printf("inserted value into queue\n");
}

int dequeue(struct queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty!\n");
        return -1;
    }
    struct node* temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return value;
}

void display(struct queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty!\n");
        return;
    }
    struct node* temp = q->front;
    printf("Queue elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct queue* q = createQueue();

    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    // enQueue(q, 4);

    display(q);

    printf("Dequeued %d\n", dequeue(q));
    // printf("Dequeued %d\n", dequeue(q));

    display(q);

    // enQueue(q, 5);
    // display(q);

    return 0;
}
