#include <stdio.h>
#include <stdlib.h>


void main(){
    float temperaturas[7];
    float soma = 0.0f;

    // Lendo os valores
    for(int i = 0 ; i < 7 ; i++){
        printf("Temperatura do dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i];
    }

    printf("\n");

    // Apresentando as temperaturas registradas
    for(int i = 0 ; i < 7 ; i++){
        printf("%.1f\t", temperaturas[i]);
    }

    printf("\n\n");

    // Calculando a média
    float media = soma / 7;
    printf("Media: %.1f\n", media);

    // Informando a maior temperatura
    float maior = temperaturas[0];
    
    for(int i = 1 ; i < 7 ; i++){
        if(maior < temperaturas[i]){
            maior = temperaturas[i];
        }
    }

    printf("Maior temperatura: %.1f\n", maior);

    // Informando a menor temperatura 
    float menor = temperaturas[0];

    for(int i = 1 ; i < 7 ; i++){
        if(temperaturas[i] < menor){
            menor = temperaturas[i];
        }
    }

    printf("Menor: %.1f\n", menor);

    // Quantidade de dias acima da média
    int qntdAcima = 0;

    for(int i = 0 ; i < 7 ; i++){
        if(temperaturas[i] > media){
            qntdAcima++;
        }
    }

    printf("Quantidade de temperatuas acima da media: %d\n", qntdAcima);
}