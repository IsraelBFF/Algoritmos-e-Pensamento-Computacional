#include <stdio.h>

void main(){
    int codigos[100];

    for(int i = 0; i < 100 ; i++){
        codigos[i] = i+1;
    }

    for(int i = 0; i < 100; i++){
        if(codigos[i] == 37){
            printf("Codigo encontrado!\n");
            break; // saindo do laço de repetição
        }

        printf("Verificando %d\n", codigos[i]);
    }
}