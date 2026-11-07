#include <stdio.h>

void main(){
    int var = 10;
    int *p = &var;

    printf("Valor da variavel: %d\n", var);
    printf("Endereco da variavel: %p\n\n", &var);
    printf("Valor armazenado em p: %p\n", p);
    printf("Valor armazenado no valor de p: %d\n", *p);
}