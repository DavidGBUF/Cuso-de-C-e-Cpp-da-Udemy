#include <stdio.h>
#include <stdlib.h>


void mostravetor(int *vetorgeral, int tam);
void soma_um_vetor(int *vetorgeral, int tam);

int main(){
    int vetorespecifico[4] = {1,2,3,4};

    mostravetor(vetorespecifico,4);

    soma_um_vetor(vetorespecifico,4);
    mostravetor(vetorespecifico,4);
    return 0;
}

void mostravetor(int *vetorgeral, int tam){
    for(int i=0;i<tam;i++){
        if(i==tam-1){
            printf("%d \n",vetorgeral[i]);
        } else{
        printf("%d ",vetorgeral[i]);}
    }
}

void soma_um_vetor(int *vetorgeral, int tam){
    for(int i=0; i<tam;i++)
        vetorgeral[i]++;

}