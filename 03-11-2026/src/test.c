#include <stdio.h>

void main(){
    int x = 42;
    int *p = &x;

    printf("Valor da variavel x: %d\n", x);
    printf("Endereco da variavel x: %p\n", p);
    printf("Valor via ponteiro: %d\n", *p);
}