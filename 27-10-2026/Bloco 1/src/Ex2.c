#include<stdio.h>

void exibirSaldo(float valor){
    printf("Saldo atual: R$ %.2f\n", (float) valor); 
}

int main(){
    exibirSaldo(1250.5f);
    return 0;
}