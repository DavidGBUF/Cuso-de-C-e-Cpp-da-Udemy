#include <iostream>
#include <stdlib.h>
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
    }

}


void burble_sort(int vetor[TAM]){
    int x,y , aux;

    for(x=0;x<TAM;x++){
        for(y=x+1; y<TAM;y++){
            if(vetor[x]>vetor[y]){
                aux=vetor[x];
                vetor[x]=vetor[y];
                vetor[y]= aux;
            }
        }
    }


}

int main(){
    int vetor[TAM]={10,9,8,7,6,5,4,3,2,1};
    burble_sort(vetor);
    imprimir_vetor(vetor);
    
    return 0;

}
