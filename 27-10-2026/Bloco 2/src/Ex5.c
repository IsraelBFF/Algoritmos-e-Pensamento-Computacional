#include<stdio.h>

int temDireitoBonus(float salario, int anosEmpresa){
    if (salario < 5000 && anosEmpresa >= 2){
        return 1;
    }

    return 0;
}

int main(){
    float salario;
    int anosEmpresa;

    printf("Salario R$: ");
    scanf("%f", &salario);
    printf("Anos na empresa: ");
    scanf("%d", &anosEmpresa);

    printf("Situacao: ");

    switch(temDireitoBonus(salario, anosEmpresa)){
        case 0:
            printf("Nao possui direito\n");
            break;
        case 1:
            printf("Possui direito\n");
            break;   
    }

    return 0;
}