#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <new>
#include <string>
#define TAM 10

using namespace std;


void imprimir_vetor(int vetor[TAM]);
int busca_simples(int vetor[TAM], int valor_procurado, int *indice_valor_procurado);
int busca_binaria(int vetor[TAM], int valor_procurado, int *indice_valor_procurado);


int main(){
    int Vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};
    int valor_procurado, indice_valor_procurado;
    cout << "O Vetor eh: ";
    imprimir_vetor(Vetor);

    printf("\nQual valor deseja encontrar?: ");
    scanf("%d", &valor_procurado);

    if(busca_binaria(Vetor, valor_procurado, &indice_valor_procurado ) == 1){
        cout << "O valor " << valor_procurado << " foi encontrado no indice: " 
        << indice_valor_procurado;
    } else{
        cout << "O valor " << valor_procurado << " nao foi encontrado no vetor.";
    }

    return 0;
}



void imprimir_vetor(int vetor[TAM]){
    for(int i=0;i<TAM;i++){
        if(i==0){
            cout <<"[" <<vetor[i];
        } else if(i==(TAM-1)){
            cout <<","<<vetor[i]<<"]";
        } else{
            cout << "," << vetor[i];
        }
    }

}


int busca_simples(int vetor[TAM], int valor_procurado, int *indice_valor_procurado){
    bool resultado_busca;

    for(int i=0; i < TAM ; i++){
        if(vetor[i]==valor_procurado){

            resultado_busca=true;
            *indice_valor_procurado=i;
        }
    }

    if(resultado_busca){
        return 1;
    } else{
        return -1;
    }
}




int busca_binaria(int vetor[TAM], int valor_procurado, int *indice_valor_procurado){
    int esquerda=0;
    int direita=TAM - 1;
    while (direita >= esquerda){
        
        int meio = (esquerda + direita)/2;
        if (vetor[meio] == valor_procurado){
            *indice_valor_procurado=meio;
            return 1;
        } else if(vetor[meio]>valor_procurado){
            direita = meio - 1;
        } else{
            esquerda = meio +1;
        }
    }
    return -1;
}

