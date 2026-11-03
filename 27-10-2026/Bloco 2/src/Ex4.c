#include<stdio.h>

float calcularComissao(float vendas, float percentual){
    return vendas * percentual / 100; 
}

int main(){
    float vendas, percentual;

    printf("Vendas: R$ ");
    scanf("%f", &vendas);
    printf("Percentual: ");
    scanf("%f", &percentual);
    printf("Resultado: R$ %.2f\n", calcularComissao(vendas, percentual));
    return 0;
}