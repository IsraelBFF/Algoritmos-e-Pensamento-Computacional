#include <stdio.h>

float calcularTaxa(float valorConta){
    return valorConta * 0.1f;
}

int main(){
    float valorConta;

    printf("Conta: ");
    scanf("%f", &valorConta);
    printf("Taxa: %.2f\n", calcularTaxa(valorConta));

    return 0;
}

