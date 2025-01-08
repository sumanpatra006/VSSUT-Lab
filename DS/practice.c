#include<stdio.h>

void printarr(int arr[],int length){
    for(int i=0; i<length; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubblesort(int arr[], int length){
    for(int i=length-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j]= temp ;
            }
        }
    }
    printarr(arr, length);
}

void selectionSort(int arr[], int length){
    for(int i=0; i<=length-2; i++){
        int min = i;
        for(int j=i; j<=length-1; j++){
            if(arr[j]<arr[min]) min = j;
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printarr(arr,length);
}

void insertionsort(int arr[], int length){
    for(int i=0; i<=length-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    printarr(arr,length);
}

int main(){
    int length = 6;
    int arr[] = {12,25,6,18,9,7};
    insertionsort(arr,length);
}



#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left ,*right;
}node;

node* createnode(int data){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    newnode->left = newnode->right = NULL ;
    return newnode;
}

node* insert(node* node,int data){
    if(node == NULL) return createnode(data);
    if(data < node->data) {
        node->left=insert(node->left,data);
    }
    if(data > node->data) {
       node->right= insert(node->right,data);
    }
    return node;
}

void inorder(node* root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void postorder(node* root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
    node* root = NULL;
    int numberofnode,data;
    printf("number of nodes : ");
    scanf("%d",&numberofnode);
    for(int i=0; i<numberofnode; i++){
        scanf("%d",&data);
        root = insert(root , data);
    }

    inorder(root);
    postorder(root);
}