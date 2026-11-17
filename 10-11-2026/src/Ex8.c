#include<stdio.h>
#include<stdlib.h>

void main(){
    int pontuacoes[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("Pontuacao %d: ", i+1);
        scanf("%d", &pontuacoes[i]);
    }

    for(int i = 4 ; i >= 0 ; i--){
        printf("%d ", pontuacoes[i]);
    }
    printf("\n");
}