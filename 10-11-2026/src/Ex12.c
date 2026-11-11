#include<stdio.h>
#include<stdlib.h>

void main(){
    float valores[10];
    float valorTotal = 0;

    for(int i = 0 ; i < 10 ; i++){
        printf("Valor do produto: R$ ");
        scanf("%f", &valores[i]);

        valorTotal += valores[i];
    }

    float valorMedio = valorTotal/10;

    int qntdAbaixoMedia = 0;
    for(int i = 0 ; i < 10 ; i++){
        if(valores[i] < valorMedio){
            qntdAbaixoMedia++;
        }
    }

    printf("\nQuantidade de vendas abaixo da media: %d\n", qntdAbaixoMedia);
}