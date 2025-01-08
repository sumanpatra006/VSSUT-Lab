#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int value)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    if (newnode)
    {
        newnode->data = value;
        newnode->next = NULL;
    }
    return newnode;
}


void printll(struct node **head)
{
    struct node *temp = *head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
}

void insert_begin(struct node **head , int value)
{
    struct node *ptr = createNode(value);
    ptr->next = *head;
    *head = ptr;
}

int main()
{
    struct node *head = NULL;
    insert_begin(&head,20);
    insert_begin(&head, 15);
    printll(&head);
}
