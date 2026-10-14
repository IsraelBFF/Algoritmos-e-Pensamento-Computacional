#include <stdio.h>

void main(){
    float soma = 0.0;
    float maxTemp = 0.0;
    float minTemp = 0.0;
    float temp; 

    printf("Temperatura do dia 1 (C): ");
    scanf("%f", &temp);

    minTemp = temp;
    soma += temp;

    for (int i = 2; i <= 7 ; i++){
        printf("Temperatura do dia %d (C): ", i);
        scanf("%f", &temp);

        soma += temp;

        if (temp > maxTemp){
            maxTemp = temp;
        }

        if (minTemp > temp){
            minTemp = temp;
        }
    }

    float media = soma/7;
    
    printf("\nTemperatura media: %.2f\n", media);
    printf("Maior temperatura registrada: %.2f\n", maxTemp);
    printf("Menor temperatura registrada: %.2f\n", minTemp);
}