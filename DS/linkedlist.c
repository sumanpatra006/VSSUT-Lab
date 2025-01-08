#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void takeInput(struct node *head){
    struct node *ptr = head;
    for(int i=0;i<4;i++){
        scanf("%d", &ptr->data);
        ptr = ptr->next;
    }
}

void showOutput(struct node *head){
    struct node *check = head;
    while(check!=NULL){
        printf("%d\n" ,check->data);
        check = check->next;
    }
}


int main()
{
    // struct node node1;
    // struct node node2;
    // struct node node3;

    // node1.data = 10;
    // node1.next = &node2;

    // node2.data = 20;
    // node2.next = &node3;

    // node3.data = 30;
    // node3.next = NULL;

    // printf("Node 1 data: %d\n", node1.data);
    // printf("Node 2 data: %d\n", node2.data);
    // printf("Node 3 data: %d\n", node3.data);

    struct node *head , *first , *second;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));


    head->data = 24;
    head->next =first;

    first->data = 11;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    first->next = NULL;
    free(second);

    struct node *ptr = head;

    while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }

    // takeInput(head);
    // showOutput(head);

}