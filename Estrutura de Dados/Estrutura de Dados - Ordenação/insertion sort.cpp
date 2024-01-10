#include <stdlib.h>
#include <iostream>
#include <string>
#define TAM 10

using namespace std;

void imprimir_vetor(int vetor[TAM]){
    for(int i=0;i<TAM;i++){
        if(i==0){
            cout <<"[" <<vetor[i];
        } else if(i==(TAM-1)){
            cout <<","<<vetor[i]<<"]";
        } else{
            cout << "," << vetor[i];
        }
    }}


void insertion_sort(int vetor[TAM]){
    int j, atual;
    for(int i = 1; i<TAM;i++){
        atual = vetor[i];
        j = i - 1;
        while(j>=0 && atual<vetor[j]){
            vetor[j+1] = vetor[j];
            j--;
        }

        vetor[j+1]=atual;

    }
}


void selection_sort(int vetor[TAM]){
    int aux, posicao_do_menor;
    for(int i=0;i<TAM;i++){
        posicao_do_menor=i;
        for(int j = i+1; j<TAM;j++ ){
            if(vetor[posicao_do_menor]>vetor[j]){
                posicao_do_menor=j;
            }
        }
        if(i!=posicao_do_menor){
            aux=vetor[i];
            vetor[i]= vetor[posicao_do_menor];
            vetor[posicao_do_menor]= aux;
        }
    }
}


void quick_sort(int vetor[TAM], int inicio, int fim){
    int pivo,meio,esq, dir,aux;
    esq = inicio;
    dir = fim;
    meio =(int) ((esq+dir) / 2);
    pivo=vetor[meio];

    while(dir>esq){
    while(vetor[esq]<pivo){
        esq++;
    }

    while(vetor[dir]>pivo){
        dir--;
    }

    if(esq<=dir){
        aux=vetor[esq];
        vetor[esq]=vetor[dir];
        vetor[dir]= aux;
        esq++;
        dir--;
    } }

    cout << "\n";
    imprimir_vetor(vetor);
    if(inicio<dir){
        quick_sort(vetor, inicio, dir);
    }

    if(esq<fim){
        quick_sort(vetor, esq, fim);
    }
}


void shell_sort(int vetor[TAM]){
    int j,atual, h = 1;
    while(h<TAM){
        h=3*h + 1;
    }
    while(h>1){
        h = h/3;
    for(int i = h; i<TAM;i++){
        atual = vetor[i];
        j = i - h;
        while(j>=0 && atual<vetor[j]){
            vetor[j+h] = vetor[j];
            j=j-h;
        }
        vetor[j+h]=atual;
    }}
} 

void merge(int vetor[TAM], int indiceEsquerdo, 
    int meio , int indiceDireito){
    int i,j;
    int n1 = meio - indiceEsquerdo +1;
    int n2 = indiceDireito - meio;
    int vetoresquerdo[n1] , vetorDireito[n2];

    for(int i = 0; i<n1;i++){
        vetoresquerdo[i] = vetor[i+indiceEsquerdo];
    }

    for(int j = 0; j < n2;j++){
        vetorDireito[j] = vetor[j+1+meio];
    }

    i=0;
    j=0;
    int k = indiceEsquerdo ;

    while(i < n1 && j< n2)
    {
        if(vetoresquerdo[i] <= vetorDireito[j]){
            vetor[k] = vetoresquerdo[i];
            i++;
        } else{
            vetor[k] = vetorDireito[j];
            j++; 
        }

        k++;
    }

    while(i<n1){
        vetor[k] = vetoresquerdo[i];
        i++;
        k++;
    }

    while(j<n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
    

}

void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito){
    if(indiceEsquerdo<indiceDireito){
        int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo)/2;
        
        merge_sort(vetor, indiceEsquerdo, meio);
        merge_sort(vetor, meio+1, indiceDireito);

        merge(vetor,indiceEsquerdo,meio,indiceDireito);
    }
}


int main(){
    
    int vetor[TAM]={10,2,8,4,6,5,7,3,9,1};
    
    merge_sort(vetor,0,9);

    
    
    imprimir_vetor(vetor);
    
    return 0;

}
 

 
