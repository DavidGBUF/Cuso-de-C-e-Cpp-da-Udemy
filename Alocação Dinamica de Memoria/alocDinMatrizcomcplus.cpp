#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <new>
using namespace std;


int main(){
    int linhas, colunas;
    printf("\nDigite aqui o numero de linhas da matrix: ");
    scanf("%d", &linhas);
    printf("\nDigite aqui o numero de colunas da matrix: ");
    scanf("%d", &colunas);

    int **matriz;

    matriz = (int **) new int[linhas];

    for(int i=0;i<linhas;i++){
        matriz[i]= (int *) new int[colunas];
    }

    for(int i = 0; i<linhas;i++){
        
        for(int j = 0; j<colunas; j++){
            matriz[i][j] = i+j;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}