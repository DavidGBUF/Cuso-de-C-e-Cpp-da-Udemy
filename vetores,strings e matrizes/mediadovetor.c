#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int main(){
    float vetor[TAM];
    float cont;
    for(int i = 0;i<TAM;i++){
        printf("\nDigite aqui o valor da %d posicao do vetor: ", i);
        scanf("%f",&vetor[i]);
        cont = cont + vetor[i];
    }

    printf("\nO vetor formado eh: [");
    for(int i =0 ; i <TAM ; i++){
        if(i==2){
            printf("%f]",vetor[i]);
        } else{
        printf("%f,",vetor[i]);}
    }

    printf("\nA media dos elementos dos vetores eh: %f", cont/3);
    return 0;
}