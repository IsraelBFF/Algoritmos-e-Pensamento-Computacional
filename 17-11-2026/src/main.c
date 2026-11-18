#include<stdio.h>
#include<stdlib.h>

void main(){
// PARTE 1

    // Lendo e exibindo a soma
    int valores[5];
    int soma = 0;

    for(int i = 0 ; i < 5 ; i++){
        printf("Valor #%d: ", i+1);
        scanf("%d", &valores[i]);

        soma += valores[i];
    }

    printf("\nSoma: %d\n", soma);

    // Calculando a média
    float media = soma / 5;
    printf("Media: %.1f\n", media);

    // Encontrando o maior valor
    int maior = valores[0];

    for(int i = 1 ; i < 5 ; i++){
        if(maior < valores[i]){
            maior = valores[i];
        }
    }

    printf("Maior valor: %d\n", maior);

    // Encontrando o menor valor
    int menor = valores[0];

    for(int i = 1 ; i < 5 ; i++){
        if(valores[i] < menor){
            menor = valores[i];
        }
    }

    printf("Menor valor: %d\n", menor);

// PARTE 2
    // Contando quantas vezes um valor se repete
    int valorProcurado;
    int qntdVezes = 0;

    printf("\nValor para ser contado: ");
    scanf("%d", &valorProcurado);

    for(int i = 0 ; i < 5 ; i++){
        if(valorProcurado == valores[i]){
            qntdVezes++;
        }
    }

    printf("Quantidade de vezes que ele se repete: %d\n", qntdVezes);

    // Dobrando todos os valores do array;
    printf("\n\tDOBRANDO VALORES...\n\n");
    
    for(int i = 0 ; i < 5 ; i++){
        valores[i] *= 2;
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", valores[i]);
    }

    printf("\n");

    // Copiando um array para outro
    printf("\n\tCOPIANDO ARRAY...\n");

    int outrosValores[5];

    for(int i = 0 ; i < 5 ; i++){
        outrosValores[i] = valores[i];
    }

    printf("valores = [ %d ", valores[0]);
    for(int i = 1 ; i < 5 ; i++){
        printf(",%d ", outrosValores[i]);
    }
    printf("]\n");

    

    printf("\n");
}