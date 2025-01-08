#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int deque[MAX];
int front = -1, rear = -1;

int isFull() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

int isEmpty() {
    return (front == -1);
}

void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty()) { 
        front = rear = 0;
    } else if (front == 0) { 
        front = MAX - 1;
    } else {
        front--;
    }
    deque[front] = value;
    printf("Inserted %d at the front.\n", value);
}

void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = value;
    printf("Inserted %d at the rear.\n", value);
}
   
void deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }
    printf("Deleted %d from the front.\n", deque[front]);
    if (front == rear) { 
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

void deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }
    printf("Deleted %d from the rear.\n", deque[rear]);
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
}


void display() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }

    printf("Deque elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", deque[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", deque[rear]);
}

int main() {
   insertFront(7);
   insertFront(3);
   insertRear(11);
   insertFront(9);
   display();
   deleteFront();
   deleteRear();
   display();
    return 0;
}
