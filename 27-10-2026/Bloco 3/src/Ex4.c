#include<stdio.h>

float calcularFrete(float valorCompra){
    if (valorCompra < 100){
        return 25;
    } else if ( valorCompra >= 100 && valorCompra < 300){
        return 15;
    } else {
        return 0;
    }
}

float calcularTotalCompra(float valorCompra, float frete){
    return valorCompra + frete;
}

void exibirResumoCompra(float valorCompra, float frete, float total){
    printf("\nValor da compra: R$ %.2f\n", valorCompra);
    printf("Valor do frete: R$ %.2f\n", frete);
    printf("Total da compra: R$ %.2f\n", total);
}

int main(){
    float valorCompra;

    printf("Valor da compra: R$ ");
    scanf("%f", &valorCompra);

    float frete = calcularFrete(valorCompra);
    float total = calcularTotalCompra(valorCompra, frete);

    exibirResumoCompra(valorCompra, frete, total);

    return 0;
}