#include<stdio.h>

float maiorFaturamento(float filialA, float filialB){
    if( filialA > filialB) return filialA;
    else return filialB;
    
}

int main(){
    float filialA, filialB;

    printf("Faturamento filial A: R$ ");
    scanf("%f", &filialA);
    printf("Faturamento filial B: R$ ");
    scanf("%f", &filialB);

    printf("Filial com maior faturamento: ");

    if(filialA > filialB) printf("A");
    else printf("B");
    
    printf("\nValor: R$ %.2f\n", maiorFaturamento(filialA, filialB));
    return 0;
}