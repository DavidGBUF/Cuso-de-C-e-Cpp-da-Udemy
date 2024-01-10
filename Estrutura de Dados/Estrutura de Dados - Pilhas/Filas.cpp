#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10

using namespace std;

bool fila_vazia(int frente, int tras){
    if(frente>tras){
        return true;
    } else{
        return false;
    }

}


bool fila_cheia(int tras){
    if(tras == TAM - 1){
        return true;
    } else{
        return false;
    }

}



void fila_desenfileirar(int fila[TAM],int *frente, int tras){
    if(!fila_vazia(*frente, tras)){
    cout << "O valor " << fila[*frente] << " foi removido";
    fila[*frente] = 0;
    (*frente)++;} else{
        cout << "A fila esta vazia!";
    } 


}


void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor_adicionado, int *tras){
    if(fila_cheia(*tras)){
        cout << "Fila Cheia!";
    } else{
        (*tras)++;
        fila[*tras]= valor_adicionado;
    }
    
}

void imprimir_vetor(int vetor[TAM]){
    for(int i=0;i<TAM;i++){
        if(i==0){
            cout <<"\n[" <<vetor[i];
        } else if(i==(TAM-1)){
            cout <<","<<vetor[i]<<"]";
        } else{
            cout << "," << vetor[i];
        }
    }
}


int tamanho_fila(int tras, int frente){
    return (tras - frente) +1;
}

int main(){
    int frente, tras;
    int fila[TAM]={0,0,0,0,0,0,0,0,0,0};

    fila_construtor(&frente, &tras);
    fila_enfileirar(fila,5 , &tras);
    fila_enfileirar(fila,6 , &tras);
    fila_enfileirar(fila,7 , &tras);
    fila_enfileirar(fila,5 , &tras);
    
    imprimir_vetor(fila);

    cout << "\n";
    fila_desenfileirar(fila, &frente, tras);
    imprimir_vetor(fila);

    cout << "\n";
    fila_desenfileirar(fila, &frente, tras);
    imprimir_vetor(fila);


    cout << "\n";
    fila_desenfileirar(fila, &frente, tras);
    imprimir_vetor(fila);

    cout << "\n";
    fila_desenfileirar(fila, &frente, tras);
    imprimir_vetor(fila);

    cout << "\n";
    fila_desenfileirar(fila, &frente, tras);
    imprimir_vetor(fila);



    return 0;
}