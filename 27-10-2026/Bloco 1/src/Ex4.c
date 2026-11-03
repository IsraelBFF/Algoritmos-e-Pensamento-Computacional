#include<stdio.h>

int main(){
    int horas;

    printf("Quantidade de horas: ");
    scanf("%d", &horas);
    printf("%d horas = %d minutos\n", horas, converterParaMinutos(horas));

    return 0;
}

int converterParaMinutos(int horas){
    return horas * 60;
}