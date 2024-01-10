#include <string>
#include <iostream>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM], int topo_pilha);
void pilha_push(int vetor[TAM], int valor_adicionado, int *topo_pilha);
void pilha_pop(int vetor[TAM],int *topo_pilha);
bool pilha_vazia(int topo);
bool pilha_cheia(int topo);
int pilha_get(int pilha[TAM], int *topo);
int tamanho_pilha(int topo);
void pilha_construtor(int pilha[TAM], int *topo);

int main(){
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo_pilha;
    cout << "O Vetor vazio eh: ";
    pilha_construtor(pilha, &topo_pilha);
    imprimir_vetor(pilha, topo_pilha);

    pilha_push(pilha, 5, &topo_pilha);
    // pilha_push(pilha, 2, &topo_pilha);
    // pilha_push(pilha, 3, &topo_pilha);
    // pilha_push(pilha, 4, &topo_pilha);
    // pilha_push(pilha, 5, &topo_pilha);
    // pilha_push(pilha, 6, &topo_pilha);
    // pilha_push(pilha, 7, &topo_pilha);
    // pilha_push(pilha, 8, &topo_pilha);
    // pilha_push(pilha, 9, &topo_pilha);
    // pilha_push(pilha, 10, &topo_pilha);
    cout << "\nA nova pilha eh: ";
    imprimir_vetor(pilha, topo_pilha);

    cout << "\nO tamanho da pilha eh: " << tamanho_pilha(topo_pilha);
    cout << "\nO ultimo valor da pilha eh: " << pilha_get(pilha, &topo_pilha);


    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);
    pilha_push(pilha, 7, &topo_pilha);



    pilha_pop(pilha, &topo_pilha);
    imprimir_vetor(pilha, topo_pilha);
    // imprimir_vetor(pilha);


    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);
    // pilha_pop(pilha, &topo_pilha);

    // imprimir_vetor(pilha);
    // pilha_pop(pilha, &topo_pilha);
    
    
    
    return 0;
}

bool pilha_vazia(int topo){
    if(topo<=-1){
        return true;
    } else {
        return false;
    }
}

bool pilha_cheia(int topo){
    if(topo==TAM - 1){
        return true;
    } else {
        return false;
    }
}

int tamanho_pilha(int topo){
    return topo + 1;
}

int pilha_get(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){
        cout << "Pilha Vazia, impossivel fazer get";
        return 0;
    } else{
        return pilha[*topo];
    }
}


void imprimir_vetor(int vetor[TAM], int topo_pilha){
    for(int i=0;i<TAM;i++){
        if(i==0){
            cout <<"[" <<vetor[i];
        } else if(i==(TAM-1)){
            cout <<","<<vetor[i]<<"]";
        } else{
            cout << "," << vetor[i];
        }
    }
    cout << "\nTopo: " << topo_pilha;

}


void pilha_push(int vetor[TAM], int valor_adicionado, int *topo_pilha){
    if(pilha_cheia(*topo_pilha)){
        cout << "\nNao eh possivel empilhar! Pilha Cheia!\n";
    } else{
        (*topo_pilha)++;
        vetor[*topo_pilha]= valor_adicionado;
    }
}


void pilha_pop(int vetor[TAM],int *topo_pilha){
    if(pilha_vazia(*topo_pilha)){
        cout << "\nNao eh possivel remover ! pilha Vazia!\n";
    } else{
        cout << "\n";
        
        
        cout << " Valor Removido: " << vetor[*topo_pilha] << "\n";
        vetor[*topo_pilha] =0;
        (*topo_pilha)--;

    }
}

void pilha_construtor(int pilha[TAM], int *topo){

    *topo = -1;

    for(int i = 0 ; i<TAM ; i++){
        pilha[i ] = 0;
    }

}