#include <stdio.h>
#include <stdlib.h>

// implementation of stack using array
// implement stack using linked list
// reverse a string using stack
// prefix to postfix conversion

#define max 50
int stack[max];
int top = -1;

int isFull(){
    return top == max - 1 ;
}

int isEmpty(){
    return top == -1;
}

void push(int element){
    if(isFull()){
        printf("Stack overflow\n");
    }else{
        stack[++top] = element ;
    }
}

void pop(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return ;
    }else{
        int element = stack[top--];
    }
}

void display(){
    if(isEmpty()){
        printf("stack is empty\n");
    }else{
        printf("elements are : \n");
        for(int i=0; i<=top; i++){
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}


int main(){
    push(4);
    push(9);
    push(15);
    display();
    pop();
    display();
    return 0;
}