#include<stdio.h>
#include<stdlib.h>

void main(){
    int codProdutos[] = {10, 14, 29, 84, 95, 105, 62, 78, 74, 55};
    int codProd;
    int prodLocalizado = -1;

    printf("Codigo do produto: ");
    scanf("%d", &codProd);

    for(int i = 0 ; i < 10 ; i++){
        if(codProd == codProdutos[i]){
            prodLocalizado = i;
            break;
        }
    }

    printf("\n");

    if(prodLocalizado != -1){
        printf("Produto encontrado na posicao: %d\n", prodLocalizado);
    } else{
        printf("Produto NAO LOCALIZADO!\n");
    }
}