#include<stdio.h>
#include<stdlib.h>

void main(){
    float notas[20];
    float nota;
    int qntdNotasSatisfatorias = 0;

    for(int i = 0 ; i < 20 ; i++){
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(int i = 0 ; i < 20 ; i++){
        if(notas[i] >= 7.0){
            qntdNotasSatisfatorias++;
        }
    }

    printf("\nQuantidade de alunos com notas satisfatorias: %d\n", qntdNotasSatisfatorias);

}