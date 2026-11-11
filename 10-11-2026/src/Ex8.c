#include<stdio.h>
#include<stdlib.h>

void main(){
    int pontuacoes[5];

    while(1){
        for(int i = 0 ; i < 5 ; i++){
            printf("Pontuacao %d: ", i+1);
            scanf("%d", &pontuacoes[i]);

            if(pontuacoes[i] < 0){
                printf("Pontuacao invalida!\n");
                break;
            }
        }
    }


}