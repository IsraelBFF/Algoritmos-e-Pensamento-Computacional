#include<stdio.h>
#include<stdlib.h>

void main(){
    float temperaturas[10];
    float temperatura;

    for(int i = 0 ; i < 10; i++){
        printf("Temperatura no dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);
    }

    float maiorTemp = temperaturas[0];
    for(int i = 1 ; i < 10 ; i++){
        if(maiorTemp < temperaturas[i]){
            maiorTemp = temperaturas[i];
        }
    }

    printf("\nMaior temperatura: %.1f°C\n", maiorTemp);
}