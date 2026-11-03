#include<stdio.h>

float obterPercentual(int tipoCliente){
    switch (tipoCliente){
        case 1:
            return 0;
            break;
        case 2:
            return 0.1f;
            break;
        case 3:
            return 0.15f;
            break;
    }
}

float calcularDesconto(float valor, int tipoCliente){
    return valor * obterPercentual(tipoCliente);
}

float calcularValorFinal(float valor, int tipoCliente){
    return valor - calcularDesconto(valor, tipoCliente);
}

void exibirResultado(float original, float desconto, float final){
    printf("\nValor original: R$ %.2f\n", original);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", final);
}

int main(){
    int tipo;
    float valor;

    printf("Tipo de cliente:\n[1] Comum\n[2] Corporativo\n[3] Premium\n: ");
    scanf("%d", &tipo);
    printf("Valor da compra: R$ ");
    scanf("%f", &valor);

    float desconto = calcularDesconto(valor, tipo);
    float valorFinal = calcularValorFinal(valor, tipo);

    exibirResultado(valor, desconto, valorFinal);

    return 0;
}
