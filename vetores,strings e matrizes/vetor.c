#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main() {
    int vetor[TAM];
    vetor[0]=5;
    vetor[1]=10;
    vetor[2]=15;


    for(int i = 0; i <=TAM; i++){
        vetor[i]=vetor[i]+1;
    }

    printf("\nPosicao 1: %d", vetor[0]);
    printf("\nPosicao 2: %d", vetor[1]);
    printf("\nPosicao 3: %d", vetor[2]);

    for(int i=0; i<TAM;i++){
        printf("\nPosicao %d: %d",i, vetor[i]);
    }
    for(int i=0; i<TAM;i++){
        printf("\nDigite aqui o valor da Posicao %d: ",i);
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<TAM;i++){
        printf("\nPosicao %d: %d",i, vetor[i]);
    }
    

    
    return 0;
}