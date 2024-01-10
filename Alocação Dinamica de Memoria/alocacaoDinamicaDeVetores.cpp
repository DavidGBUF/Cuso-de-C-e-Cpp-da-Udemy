#include <stdio.h>
#include <stdlib.h>


int* aloca_vetor(int tam){
    int *aux;
    aux = (int*) malloc(tam * sizeof(int));
    return aux;
}
int main(){
    int *vetor, tam;

    printf("Digite aqui o tamanho de seu vetor: ");
    scanf("%d", &tam);
    vetor = aloca_vetor(tam);

    for(int i=0; i<tam; i++){
        vetor[i]=i;
        if(i==0){
            printf("[%d,", vetor[i]);
        } else if (i==(tam-1)){
            printf("%d]",i);
        } else{
            printf("%d,",i);
        }
    }
    return 0;
}