#include<stdio.h>
#include<stdlib.h>

void depositar(float *saldo, float valor){
    if(valor > 0){
        *saldo += valor;
    } else {
        printf("Valor invalido!\n");
    }
}

int sacar(float *saldo, float valor){
    if(*saldo >= valor && valor > 0){
        *saldo -= valor;
    } else {
        return 0;
    }

    return 1;
}

void consultarSaldo(float saldo){
    printf("Saldo: %.2f\n", saldo);
}

void main(){
    float saldo = 500;
    int opcao;
    float valor;


    do {
        printf("\n===========================================\n");
        printf("                 SISTEMA BANCÁRIO          \n");
        printf("===========================================\n\n");

        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar saldo\n");
        printf("0 - Encerrar\n");
        printf(": ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao){
            case 0:
                printf("Encerrando...\n");
                break;
            case 1:
                printf("Valor: ");
                scanf("%f", &valor);
                depositar(&saldo, valor);
                break;
            case 2:
                printf("Valor: ");
                scanf("%f", &valor);
                sacar(&saldo, valor);
                break;
            case 3:
                consultarSaldo(saldo);
                break;
        }

    } while (opcao != 0) ;
}