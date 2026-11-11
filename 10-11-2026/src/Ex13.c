#include<stdio.h>
#include<stdlib.h>

void main(){
    float temperaturas[10];

    for(int i = 0 ; i < 10 ; i++){
        printf("Momento #%d do dia: ", i+1);
        scanf("%f", &temperaturas[i]);
    }

    float maior = temperaturas[0];
    float menor = temperaturas[0];

    for(int i = 1 ; i < 10 ; i++){
        if(maior < temperaturas[i]){
            maior =  temperaturas[i];
        }
        if(temperaturas[i] < menor){
            menor = temperaturas[i];
        }
    }

    printf("\nMaior temperatura: %.1f\n", maior);
    printf("Menor temperatura: %.1f\n", menor);
    printf("Amplitude termica: %.1f\n", maior - menor);
}