#include<stdio.h>
#include<stdlib.h>

void trocar(int *a, int *b){
    int temp = *b;

    *b = *a;
    *a = temp;
}

void main(){
    int x = 10, y = 20;
    
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    
    trocar(&x, &y);

    printf("\nx: %d\n", x);
    printf("y: %d\n", y);
}