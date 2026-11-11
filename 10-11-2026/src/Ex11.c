#include<stdio.h>
#include<stdlib.h>

void main(){
    int nums[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("Valor #%d: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("\nNumero desejado: ");
    
    int numDesejado;
    scanf("%d", &numDesejado);
    
    int qntdOcorrencia = 0;

    for(int i = 0 ; i < 5 ; i++){
        if(numDesejado == nums[i]){
            qntdOcorrencia++;
        }
    }

    printf("\nQuantidade de ocorrencias: %d\n", qntdOcorrencia);
}