#include<stdio.h>

int classificarEstoque(int quantidade){
    if (quantidade <= 0){
        return 0;
    } else if (quantidade >= 1 && quantidade <= 10){
        return 1;
    } else if (quantidade > 10 && quantidade <= 50){
        return 2;
    } else {
        return 3;
    }
}

int main(){
    int quantidade;

    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Classificacao: ");

    switch(classificarEstoque(quantidade)){
        case 0:
            printf("Sem estoque\n");
            break;
        case 1:
            printf("Estoque critico\n");
            break;
        case 2:
            printf("Estoque normal\n");
            break;
        case 3:
            printf("Estoque alto\n");
    }

    return 0;
}