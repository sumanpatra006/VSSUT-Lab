#include<stdio.h>

void sum(int a , int b){
    int min = a<b ? a : b;
    int max = a>b ? a : b;
    int sum=0;
    for(int i=min;i<=max;i++){
        sum += i;
    }
    printf("%d",sum);
}

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
}