#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 10;
    int *p = &a; // apontando para o endereço da variável a

    printf("Valor de a: %d\n", a);
    printf("Valor de p: %d\n",*p); // printando o valor contido no endereço que p armazenou

    *p = 12; // atribuindo um novo valor contido no endereço armazenado por p 

    printf("Novo valor de p: %d\n", *p);
    printf("Valor de a: %d\n", a);

    return 0;
}