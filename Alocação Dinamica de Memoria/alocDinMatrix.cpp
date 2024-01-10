#include <stdio.h>
#include <stdlib.h>

int main(){
    int linhas, colunas;
    printf("\nDigite aqui o numero de linhas da matrix: ");
    scanf("%d", &linhas);
    printf("\nDigite aqui o numero de colunas da matrix: ");
    scanf("%d", &colunas);

    int **matriz;

    matriz = (int **) malloc(linhas * sizeof(int *));

    for(int i = 0; i<linhas;i++){
        matriz[i]= (int *) malloc(colunas* sizeof(int));
        for(int j = 0; j<colunas; j++){
            matriz[i][j]=i+j;
        }
    }



    for(int i = 0; i<linhas;i++){
        
        for(int j = 0; j<colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    

    free(matriz);
    return 0;
}