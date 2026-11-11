#include<stdio.h>
#include<stdlib.h>

void main(){
    int qntdProdutos[15];
    int qntdPdtZerado = 0;

    for(int i = 0 ; i < 15 ; i++){
        printf("Quantidade do produto %d: ", i+1);
        scanf("%d", &qntdProdutos[i]);

        if(qntdProdutos[i] == 0){
            qntdPdtZerado++;
        }
    }

    printf("\nQuantidade de produtos zerados: %d\n", qntdPdtZerado);
}