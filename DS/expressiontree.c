#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node {
    char data;
    struct Node *left, *right;
} Node;

Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void printStack(Node* stack[], int top) {
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%c ", stack[i]->data);
    }
    printf("\n");
}

Node* constructTree(char postfix[]) {
    Node* stack[100];
    int top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isalnum(postfix[i])) {
            stack[++top] = createNode(postfix[i]);
            printStack(stack, top);
        } else {
            Node* t = createNode(postfix[i]);

            t->right = stack[top--];  
            t->left = stack[top--];  
            stack[++top] = t;
            printStack(stack, top);
        }
    }
    return stack[top--];
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%c ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    // char postfix[] = "abc*+def+*+";
    char postfix[] = "abc*-def/+/";
    Node* root = constructTree(postfix);
    
    printf("In-order traversal: ");
    inorderTraversal(root);
    
    return 0;
}
