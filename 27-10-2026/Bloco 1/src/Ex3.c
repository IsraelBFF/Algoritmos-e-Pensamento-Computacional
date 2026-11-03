#include<stdio.h>

int main(){
    int quantidade = 20;

    printf("Quantidade informada: %d\n", quantidade);
    printf("Quantidade dobrada: %d\n", calcularDobro(quantidade));
    return 0;
}

int calcularDobro(int quantidade){
    return quantidade * 2;
}