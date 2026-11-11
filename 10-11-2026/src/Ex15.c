#include<stdio.h>
#include<stdlib.h>

void main(){
    float percentuais[10];
    int valorInvalido = 0;

    for(int i = 0 ; i < 10 ; i++){
        printf("Percentual #%d: ", i+1);
        scanf("%f", &percentuais[i]);

        if(percentuais[i] < 0 || percentuais[i] > 100){
            valorInvalido = 1;
        }
    }

    if(valorInvalido == 1){
        printf("\nIndices corrigidos: ");

        for(int i = 0; i < 10 ; i++){
            if(percentuais[i] < 0){
                printf("%d ", i);
                percentuais[i] = 0;
            } else if(percentuais[i] > 100){
                printf("%d ", i);
                percentuais[i] = 100;
            }
        }

        printf("\n");
    } else {
        printf("\nValores validos!\n");
    }

}