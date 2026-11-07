#include <stdio.h>
#include <stdlib.h>

void dobrar(int *valor){
    *valor = 2 * (*valor);
}

void main(){
    int a = 10;
    int b = 20;

    printf("a: %d\n",a);
    printf("b: %d\n", b);

    int *p = &a;
    p = &b;
    *p = 50;

    printf("\na: %d\n",a);
    printf("b: %d\n", b);

    dobrar(&a);

    printf("\na: %d\n",a);
    printf("b: %d\n", b);

}