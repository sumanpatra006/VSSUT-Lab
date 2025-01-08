// create a singly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createnode(int value)
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

struct node *insertion_begin(struct node **head)
{
    int value;
    scanf("%d", &value);
    struct node *new = createnode(value);
    new->next = *head;
    *head = new;
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

int main()
{
    struct node *head;
    head = createnode(23);
    head->next = createnode(2);
    head->next->next = createnode(10);
    insertion_begin(&head);
    printll(&head);

    // int llsize;
    // scanf("%d",llsize);
    // struct node* curr = head;
    // for(int i=0; i<llsize; i++){
    //     int val;
    //     scanf("%d",val);
    //     curr = createnode(val);
    //     curr = curr->next;
    // }

    // struct node* temp = head;
    // while(temp){
    //     printf("%d -> " , temp->data);
    //     temp = temp->next;
    // }

    return 0;
}