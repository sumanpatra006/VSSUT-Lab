#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// insert at the beginning of the circular linked list
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    struct Node *temp = *head;
    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;
    }
    else
    {
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        newNode->next = *head;
        temp->next = newNode;
        *head = newNode;
    }
}
// insert at the end of the circular linked list
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    struct Node *temp = *head;
    if (*head == NULL)
    {
        *head = newNode;
        newNode->next = *head;
    }
    else
    {
        while (temp->next != *head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}
// insert at a specific position in the circular linked list
void insertAtPosition(struct Node **head, int data, int position)
{
    if (position == 1)
    {
        insertAtBeginning(head, data);
        return;
    }
    struct Node *newNode = createNode(data);
    struct Node *temp = *head;
    int i;
    for (i = 1; i < position - 1 && temp->next != *head; i++)
    {
        temp = temp->next;
    }
    if (temp->next == *head && i != position - 1)
    {
        printf("Position out of range\n");
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
// delete the first node of the circular linked list
void deleteAtBeginning(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    struct Node *toDelete = *head;
    if ((*head)->next == *head)
    {
        *head = NULL;
        free(toDelete);
        return;
    }
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    temp->next = (*head)->next;
    *head = (*head)->next;
    free(toDelete);
}
// delete the last node of the circular linked list
void deleteAtEnd(struct Node **head)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = *head;
    struct Node *toDelete;
    if ((*head)->next == *head)
    {
        toDelete = *head;
        *head = NULL;
        free(toDelete);
        return;
    }
    while (temp->next->next != *head)
    {
        temp = temp->next;
    }
    toDelete = temp->next;
    temp->next = *head;
    free(toDelete);
}
// delete a node at a specific position in the circular linked list
void deleteAtPosition(struct Node **head, int position)
{
    if (*head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (position == 1)
    {
        deleteAtBeginning(head);
        return;
    }
    struct Node *temp = *head;
    struct Node *toDelete;
    int i;
    for (i = 1; i < position - 1 && temp->next != *head; i++)
    {
        temp = temp->next;
    }
    if (temp->next == *head || i != position - 1)
    {
        printf("Position out of range\n");
        return;
    }
    toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
}
void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}
int main()
{
    struct Node *head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    display(head);
    insertAtBeginning(&head, 5);
    display(head);
    insertAtPosition(&head, 25, 3);
    display(head);
    deleteAtBeginning(&head);
    display(head);
    deleteAtEnd(&head);
    display(head);
    deleteAtPosition(&head, 2);
    display(head);
    return 0;
}