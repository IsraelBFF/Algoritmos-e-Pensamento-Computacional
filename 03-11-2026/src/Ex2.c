#include <stdio.h>

int main(){
    int a, b, soma;
    int *p_a = NULL, *p_b = NULL, *p_soma = NULL;    
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    p_a = &a;

    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    p_b = &b;

    p_soma = &soma;
    *p_soma = *p_a + *p_b;
    
    printf("\nValor da soma: %d\n", soma);
    printf("Valor do ponteiro soma: %d\n", *p_soma);
    printf("Endereco da soma: %p\n", p_soma);

    return 0;
}