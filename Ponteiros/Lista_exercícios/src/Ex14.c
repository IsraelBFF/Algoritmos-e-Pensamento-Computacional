#include<stdio.h>
#include<stdlib.h>

int registrarVenda(int *estoque, int quantidade){
    if(*estoque > quantidade && quantidade > 0){
        *estoque -= quantidade;
    } else {
        return 0;
    }

    return 1;
}

void main(){
    int estoque = 100;
    int quantidade = 20;

    printf("Estoque inicial: %d\n", estoque);
    printf("Resultado da venda: %d\n", registrarVenda(&estoque, quantidade));
    printf("Estoque final: %d\n", estoque);
}