#include <stdio.h>
#include<stdlib.h>

int main(){
    int *p, *p1, x = 10;
    float y = 20.5;

    p = &x;
    p1 = p;

    printf("x = %d\n", x);
    printf("Valor armazenado em p: %d\n", *p);
    printf("Valor armazenado em p1: %d\n", *p1);

    p = &y;

    printf("y = %f\n", y);
    printf("Valor armazenado em p: %d\n", *p);
    printf("Valor armazenado em p: %f\n", *p);

    return 0;
}