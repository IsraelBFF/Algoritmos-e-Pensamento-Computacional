#include <stdio.h>
#include <stdlib.h>

void main(){
	char nome[30];
	printf("Entrada: ");
	fgets(nome, sizeof(nome), stdin);
	
	int qntdChar;
	for(int i = 0; nome[i] != '\0'; i++){
		qntdChar = i;
	}

	printf("\nQuantidade de caracteres: %d\n", qntdChar);
}