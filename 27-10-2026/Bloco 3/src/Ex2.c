#include<stdio.h>

float calcularSubtotal(int quantidade, float preco){
    return quantidade * preco;
}

float calcularTaxaServico(float subtotal){
    return subtotal * 0.1f;
}

float calcularTotal(float subtotal, float taxa){
    return subtotal + taxa;
}

void exibirResumo(float subtotal, float taxa, float total){
    printf("\nSubtotal: R$ %.2f\n",subtotal);
    printf("Taxa: R$ %.2f\n", taxa);
    printf("Total: R$ %.2f\n", total);
}

int main(){
    int quantidade;
    float preco;

    printf("Quantidade de refeicoes: ");
    scanf("%d", &quantidade);
    printf("Preco de cada refeicao: R$ ");
    scanf("%f", &preco);

    float subtotal = calcularSubtotal(quantidade, preco);
    float taxa = calcularTaxaServico(subtotal);
    float total = calcularTotal(subtotal, taxa);

    exibirResumo(subtotal, taxa, total);

    return 0;
}