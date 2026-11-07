#include <stdio.h>
#include <stdlib.h>

void aplicarBonus(float *saldo, float bonus){
    if (bonus > 0){
        *saldo += bonus;
    } else {
        printf("Bonus invalido!\n");
    }

    printf("Saldo: %.2f\n", *saldo);
}

void main(){
    float saldo = 500.0f;
    aplicarBonus(&saldo, 50.0);
}