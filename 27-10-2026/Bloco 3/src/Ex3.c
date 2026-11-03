#include<stdio.h>

float calcularHorasExtras(int horas, float valorHora){
    return horas * valorHora;
}

float calcularSalarioFinal(float salarioBase, float extras){
    return salarioBase + extras;
}

void exibirPagamento(float salarioBase, float extras, float salarioFinal){
    printf("\nSalario base: R$ %.2f\n", salarioBase);
    printf("Valor das horas extras: R$ %.2f\n", extras);
    printf("Pagamento final: R$ %.2f\n", salarioFinal);
}

int main(){
    float salarioBase;
    int horas;

    printf("Salario base: R$ ");
    scanf("%f", &salarioBase);
    printf("Quantidade de horas extras: ");
    scanf("%d", &horas);

    float extras = calcularHorasExtras(horas, 30);
    float salarioFinal = calcularSalarioFinal(salarioBase, extras);

    exibirPagamento(salarioBase, extras, salarioFinal);

    return 0;
}