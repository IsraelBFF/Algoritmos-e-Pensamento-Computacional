#include <stdio.h>

int main(){
    int opcao;

    printf("Escolha uma opcao: [1]Sim [2] Nao\n: ");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("A primeira opcao foi escolhida!\n");
    } else if (opcao == 2){
        printf("A segunda opcao foi escolhida!\n");
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}