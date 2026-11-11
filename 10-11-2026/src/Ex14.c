#include<stdio.h>
#include<stdlib.h>

void main(){
    int atendimentos[7];
    int totalAtendimentos = 0;

    // Lendo os valores
    for(int i = 0 ; i < 7 ; i++){
        printf("Quantidade de atendimentos no dia %d: ", i+1);
        scanf("%d", &atendimentos[i]);

        totalAtendimentos += atendimentos[i];
    }

    // Calculando a média
    float mediaAtendimentos = totalAtendimentos/7;

    // Classificando maior e menor
    int maior = atendimentos[0];
    int menor = atendimentos[0];
    int qntdAcimaMedia = 0;
    
    for(int i = 1 ; i < 7 ; i++){
        if(maior < atendimentos[i]){
            maior = atendimentos[i];
        }

        if(atendimentos[i] < menor){
            menor = atendimentos[i];
        }

        // Verificando se está acima da média
        if(atendimentos[i] > mediaAtendimentos){
            qntdAcimaMedia++;
        }
    }

    // Apresentando os valores
    printf("\nTotal: %d\n", totalAtendimentos);
    printf("Media diaria: %.1f\n", mediaAtendimentos);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Dias acima da media: %d\n", qntdAcimaMedia);
}