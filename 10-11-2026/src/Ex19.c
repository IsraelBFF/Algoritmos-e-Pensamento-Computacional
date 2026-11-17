#include<stdio.h>
#include<stdlib.h>

float calcularTotal(float vendas[], int tamanho){
	float total = 0;

	for(int i = 0 ; i < tamanho ; i++){
		total += vendas[i];
	}

	return total;
}

float calcularMedia(float vendas[], int tamanho){
	float total = calcularTotal(vendas, tamanho);

	return total / tamanho;
}

float encontrarMaior(float vendas[], int tamanho){
	int maior = vendas[0];

	for(int i = 1 ; i < tamanho; i++){
		if (maior < vendas[i]){
			maior = vendas[i];
		}
	}

	return maior;
}

float encontrarMenor(float vendas[], int tamanho){
	int menor = vendas[0];

	for(int i = 1 ; i < tamanho ; i++){
		if(vendas[i] < menor){
			menor = vendas[i];
		}
	}

	return menor;
}

int contarAcima(float vendas[], int tamanho, float referencia){
	int qntdAcima = 0;

	for(int i = 0 ; i < tamanho ; i++){
		if(vendas[i] > referencia){
			qntdAcima++;
		}
	}

	return qntdAcima;
}

void main(){
	float vendas[] = {100, 300, 400, 500};
	int tamanho = sizeof(vendas)/sizeof(vendas[0])
	float media = calcularMedia(vendas, tamanho);

	printf("%d\n", sizeof(vendas));

	printf("Total vendido: R$ %.2f\n", calcularTotal(vendas, sizeof(vendas)));
	printf("Media: R$ %.2f\n", media);
	printf("Maior valor: R$ %.2f\n", encontrarMaior(vendas, sizeof(vendas)));
	printf("Menor valor: R$ %.2f\n", encontrarMenor(vendas, sizeof(vendas)));
	printf("Quantidade de valores acima da media: %d\n", contarAcima(vendas, sizeof(vendas), media));
}