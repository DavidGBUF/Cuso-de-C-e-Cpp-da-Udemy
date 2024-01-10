#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[255];
    printf("Digite aqui seu nome: ");
    setbuf(stdin, 0);
    fgets(nome, 255, stdin);

    nome[strlen(nome)-1]='\0';
    printf("Ola %s Seja Bem vindo!", nome);
    return 0;
}