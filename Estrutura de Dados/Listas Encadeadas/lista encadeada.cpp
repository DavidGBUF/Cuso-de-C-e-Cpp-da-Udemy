#include <stdio.h>
#include <stdlib.h>
#include <new>

struct estrutura
{
    int valor;
    struct estrutura *ponteiroparaproximo;
};


int main(){
    estrutura *ponteiroEncadeada;
    estrutura *novoprimeirovalor = new estrutura;
    novoprimeirovalor->valor = 13;
    novoprimeirovalor->ponteiroparaproximo = NULL;
    printf("Valor do primeiro: %d", novoprimeirovalor->valor);
    ponteiroEncadeada = novoprimeirovalor;

    estrutura *novosegundovalor = new estrutura;
    novosegundovalor->valor = 15;
    novosegundovalor->ponteiroparaproximo = NULL;

    ponteiroEncadeada->ponteiroparaproximo = novosegundovalor;

    while(ponteiroEncadeada != NULL){
        printf("\nValor numerico: %d", ponteiroEncadeada->valor);
        ponteiroEncadeada = ponteiroEncadeada->ponteiroparaproximo;

    }
    return 0;
}