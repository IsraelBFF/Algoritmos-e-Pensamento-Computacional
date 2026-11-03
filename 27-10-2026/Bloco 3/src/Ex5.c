#include<stdio.h>

float calcularMedia(float nota1, float nota2){
    return (nota1 + nota2) / 2;
}

int verificarAprovacao(float media){
    if (media >= 7){
        return 1;
    }

    return 0;
}

void exibirResultado(float media, int situacao){
    printf("Media: %.1f\n", media);
    printf("Situacao: ");

    switch(situacao){
        case 0:
            printf("Reprovado!\n");
            break;
        case 1:
            printf("Aprovado!\n");
            break;
    }
}

int main(){
    float nota1, nota2;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    float media = calcularMedia(nota1, nota2);
    int situacao = verificarAprovacao(media);

    exibirResultado(media, situacao);

    return 0;
}