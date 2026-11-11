#include<stdio.h>
#include<stdlib.h>

void main(){
    // Armazenando os valores
    float consumos[7];
    float kwh;
    float totalKwh = 0;

    for(int i = 0 ; i < 7 ; i++){
        printf("Consumo no dia %d: ", i+1);
        scanf("%f", &consumos[i]);

        // Somando os valores
        totalKwh += consumos[i];
    }

    // Calculando a média
    float mediaKwh = totalKwh/7;
    printf("Media de consumo: %.1f kWh\n", mediaKwh);

}