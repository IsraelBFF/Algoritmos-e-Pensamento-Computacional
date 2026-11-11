#include<stdio.h>
#include<stdlib.h>

void main(){
    int pecas[5];
    int qntdPeca;
    int totalPecas = 0;

    for(int i = 0; i < 5; i++){
        printf("Quantidade de pecas produzidas no dia %d: ", i+1);
        scanf("%d", &pecas[i]);

        totalPecas += pecas[i];
    }

    printf("\n");

    for(int i = 0 ; i < 5 ; i++){
        printf("Dia %d: %d\n", i+1, pecas[i]);
    }
    printf("\nTotal: %d\n", totalPecas);
}