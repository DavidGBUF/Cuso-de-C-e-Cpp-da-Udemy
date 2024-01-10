#include <stdlib.h>
#include <stdio.h>
#define TAM 3
#include <new>


void imprimir_vetor_seq(int *vetor,int tam_vetor){
    for(int i = 0;i<tam_vetor;i++){
        if(i==0){
            printf("[%d", vetor[i]);
        } else if(i==tam_vetor-1){
            printf(",%d]", vetor[i]);
        } else{
            printf(",%d", vetor[i]);
        }
    }
}

int* alocaVetor(int tamanho_novo_vetor){;
    int *v;
    v= (int*) malloc(tamanho_novo_vetor * sizeof(int));
    return v;
}

int main(){
    int vetor_sequencial[TAM] = {1,2,3}, tamannho_vetor;

    imprimir_vetor_seq(vetor_sequencial, TAM);

    printf("\nAtualizando Valores do Vetor:\n");
    for(int i = 0; i<TAM;i++){
        printf("\nValor %d: ", i);
        scanf("%d", &vetor_sequencial[i]);
    }
    printf("\nVetor Formado: ");
    imprimir_vetor_seq(vetor_sequencial, TAM);
    
    printf("\nFormar novo vetor, tamanho do vetor: ");
    scanf("%d", &tamannho_vetor);

    int *novo_vetor = new int[5];

    printf("\nAtualizando Valores do Vetor:\n");
    for(int i = 0; i<tamannho_vetor;i++){
        printf("\nValor %d: ", i);
        scanf("%d", &novo_vetor[i]);
    }

    imprimir_vetor_seq(novo_vetor, tamannho_vetor);



    return 0;
}