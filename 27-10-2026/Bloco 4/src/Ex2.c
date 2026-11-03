#include<stdio.h>
// NÃO FINALIZADA

float calcularParcela(float valor, int parcelas){
    return valor / parcelas;
}

float calcularLimite(float renda){

}

int analisarCredito(float renda, float valor, int parcelas){
    if (calcularParcela(valor, parcelas) <= renda * 0.3){
        return 1;
    }

    return 0;
}

void exibirResultado(int aprovado){
    switch(aprovado){
        case 0:
            printf("Credito nao aprovado!\n");
            break;
        case 1:
            printf("Credito aprovado!\n");
            break;
    }
}

int main(){
    return 0;
}