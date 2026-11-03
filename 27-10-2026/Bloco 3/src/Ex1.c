#include<stdio.h>

float calcularDesconto(float valor){
    if (valor >= 500){
        return valor * 0.1f;
    }

    return 0;
}

float calcularValorFinal(float valor){
    return valor - calcularDesconto(valor);
}

int main(){
    float valorCompra;

    printf("Valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Valor final: R$ %.2f\n", calcularValorFinal(valorCompra));

    return 0;
}