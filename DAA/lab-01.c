#include <stdio.h>

void inputArray(int arr[],int size){
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergeArray(int arr1[], int size1, int arr2[], int size2){
    int tempArr[size1 + size2];
    int i=0, j=0, k=0;
    while(i < size1 && j < size2){
        if(arr1[i] < arr2[j]){
            tempArr[k++] = arr1[i++];
        }else{
            tempArr[k++] = arr2[j++];
        }
    }
    while(i < size1){
        tempArr[k++] = arr1[i++];
    }
    while(j < size2){
        tempArr[k++] = arr2[j++];
    }
    printArray(tempArr, size1 + size2);
}

int main(){
    int size1;
    printf("Enter the size of the first array : ");
    scanf("%d",&size1);
    int size2;
    printf("Enter the size of the second array : ");
    scanf("%d",&size2);
    int arr1[size1];
    int arr2[size2];
    printf("Enter the elements of the first array : ");
    inputArray(arr1, size1);
    printf("Enter the elements of the second array : ");
    inputArray(arr2, size2);
    // int arr1[] = {1, 3, 5, 7};
    // int arr2[] = {2, 4, 6, 8};
    
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);
    mergeArray(arr1, size1, arr2, size2);
    return 0;
}