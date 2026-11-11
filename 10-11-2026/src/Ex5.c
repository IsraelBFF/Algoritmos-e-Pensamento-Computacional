#include<stdio.h>
#include<stdlib.h>

void main(){
    float precos[8];
    float preco;

    for(int i = 0 ; i < 8 ; i++){
        printf("Preco do produto na loja %d: ", i+1);
        scanf("%f", &precos[i]);
    }

    float menorPreco = precos[0];
    for(int i = 1 ; i < 8 ; i++){
        if(precos[i] < menorPreco){
            menorPreco = precos[i];
        }
    }
    
    printf("\nMenor preco: R$ %.2f\n", menorPreco);
}