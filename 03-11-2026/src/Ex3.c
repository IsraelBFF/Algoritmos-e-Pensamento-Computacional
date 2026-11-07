#include <stdio.h>

void trocar(int *a, int *b){
    int auxiliar = *b;

    *b = *a;
    *a = auxiliar;
}

void main(){
    int num1, num2;
    int *p_num1 = NULL, *p_num2 = NULL;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    p_num1 = &num1;

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    p_num2 = &num2;

    printf("\nPrimeiro valor: %d\n", num1);
    printf("Segundo valor: %d\n", num2);

    trocar(p_num1, p_num2);

    printf("\nTrocando...\n");

    printf("\nPrimeiro valor: %d\n", num1);
    printf("Segundo valor: %d\n", num2);
}