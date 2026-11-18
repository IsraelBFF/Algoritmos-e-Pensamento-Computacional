#include<stdio.h>
#include<stdlib.h>

void main(){
    int tamanho;
    printf("Tamanho do array: ");
    scanf("%d", &tamanho);

    int valores[tamanho];
    int soma = 0;
    for(int i = 0 ; i < tamanho ; i++){
        printf("Valor #%d: ", i+1);
        scanf("%d", &valores[i]);
        soma += valores[i];
    }

    float media = soma / tamanho;
    printf("Soma dos elementos: %d\n", soma);
    printf("Media dos elementos: %.1f\n", media);

    int maior = valores[0];
    for(int i = 1 ; i < tamanho ; i++){
        if(maior < valores[i]){
            maior = valores[i];
        }
    }

    printf("Maior valor: %d\n", maior);

    int menor = valores[0];
    for(int i = 1 ; i < tamanho ; i++){
        if(valores[i] < menor){
            menor = valores[i];
        }
    }

    printf("Menor: %d\n", menor);

    int valorProcurado;
    int qntdVezes = 0;
    printf("Valor para ser contabilizado: ");
    scanf("%d", &valorProcurado);

    for(int i = 0 ; i < tamanho ; i++){
        if(valorProcurado == valores[i]){
            qntdVezes++;
        }
    }

    printf("Quantidade de vezes que o numero %d aparece: %d\n", valorProcurado, qntdVezes);
}