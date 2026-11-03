#include <stdio.h>

float calcularSubtotal(float preco, int quantidade){
    return preco * quantidade;
}

int main(){
    float preco;
    int quantidade;

    printf("Preco: R$ ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    printf("Subtotal: R$ %.2f\n", calcularSubtotal(preco, quantidade));

    return 0;
}