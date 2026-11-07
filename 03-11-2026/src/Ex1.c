#include <stdio.h>

void dobra(int *p_num){
    *p_num = 2 * (*p_num);
}

int main(){
    int num;
    int *p = &num;

    printf("Digite um valor: ");
    scanf("%d", &num);
    
    printf("\nValor original: %d\n", num);
    dobra(p);
    printf("Valor dobrado: %d\n", num);
    printf("Endereco do numero: %p\n", p);


    return 0;
}