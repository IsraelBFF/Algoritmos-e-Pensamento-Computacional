#include<stdio.h>
#include<stdlib.h>

void main(){
    int codProdutos[] = {10, 14, 29, 84, 95, 105, 62, 78, 74, 55};
    int codProd;
    int prodLocalizado = 0;

    printf("Codigo do produto: ");
    scanf("%d", &codProd);

    for(int i = 0 ; i < 10 ; i++){
        if(codProd == codProdutos[i]){
            prodLocalizado = 1;
            break;
        }
    }

    printf("\n");

    if(prodLocalizado == 1){
        printf("Produto LOCALIZADO!\n");
    } else{
        printf("Produto NAO LOCALIZADO!\n");
    }
}