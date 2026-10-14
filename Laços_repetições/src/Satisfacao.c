#include <stdio.h>

void main(){
    int qntdValidas = 0;
    int resp;
    int nota;
    int soma = 0;
    int qntdNotaMax = 0;

    do{
        printf("Nota de satisfacao apos atendimento (1-5): ");
        scanf("%d", &nota);

        if (nota >= 1 && nota <= 5){
            qntdValidas++;
            soma += nota;
        }

        if (nota == 5){
            qntdNotaMax++;
        }

        printf("\nDeseja continuar?\n[1] Sim\n[0] Nao\n: ");
        scanf("%d", &resp);

        printf("\n");
    } while (resp != 0);

    float media = soma/qntdValidas;

    printf("\n===== RESUMO DAS AVALIACOES =====\n");
    printf("Avaliacoes validas: %d\n", qntdValidas);
    printf("Media das avaliacoes: %.2f\n", media);
    printf("Avaliacoes com nota 5: %d\n", qntdNotaMax);
}