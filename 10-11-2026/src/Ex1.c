#include<stdio.h>
#include<stdlib.h>

void main(){
    float temperaturas[7];

    for(int i = 0 ; i < 7 ; i++){
        printf("Temperatura do dia %d: ", i+1);
        scanf("%f", &temperaturas[i]);
    }

    printf("\nTemperaturas:\n");
    for(int i = 0 ; i < 7 ; i++){
        printf("Dia %d: %.1f\n", i+1, temperaturas[i]);
    }
}