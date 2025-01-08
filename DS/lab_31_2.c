#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// reverse a string using stack

#define max 50

void reverseString(char str[]){
    int length = strlen(str);
    char stack[length] ;
    int top = -1;

    for(int i=0; i<length; i++){
        stack[++top] = str[i];
    }

    for(int i=0; i<length; i++){
        str[i] = stack[top--];
    }
}

int main(){
    printf("Enter a string : ");
    char str[max];
    gets(str);
    reverseString(str);
    printf("reversed string is : %s" , str);
    return 0;
}