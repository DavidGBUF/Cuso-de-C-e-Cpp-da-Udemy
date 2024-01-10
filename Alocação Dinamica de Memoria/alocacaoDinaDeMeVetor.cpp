#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <new>
using namespace std;

int main(){
    int tam;
    cout << "Digite aqui o tamanho de seu Vetor: ";

    cin >> tam;

    int *vetor = new int[tam];

    for(int i=0; i<tam; i++){
        vetor[i]=i;
        if(i==0){
            printf("\n[%d,", vetor[i]);
        } else if (i==(tam-1)){
            printf("%d]",i);
        } else{
            printf("%d,",i);
        }
    }
    
    return 0;
}