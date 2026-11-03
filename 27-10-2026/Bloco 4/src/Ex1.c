#include<stdio.h>

float obterValorHora(int tipo){
    switch (tipo){
        case 1:
            return 5;
            break;
        case 2:
            return 8;
            break;
        case 3:
            return 12;
            break;
    }
}

float calcularValorEstadia(int tipo, int horas){
    return obterValorHora(tipo) * horas;
}

void exibirComprovante(int tipo, int horas, float total){
    printf("\nTipo de veiculo: %d\n", tipo);
    printf("Quantidade de horas %d\n", horas);
    printf("Valor total: R$ %.2f\n", total);
}

int main(){
    int tipo, horas;

    printf("Tipo de veiculo:\n[1] Moto\n[2] Carro\n[3] Utilitario\n: ");
    scanf("%d", &tipo);
    printf("Quantidade de horas no estacionamento: ");
    scanf("%d", &horas);

    float valorHora = obterValorHora(tipo);
    float valorEstadia = calcularValorEstadia(tipo, horas);

    exibirComprovante(tipo, horas, valorEstadia);

    return 0;
}