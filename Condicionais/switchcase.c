#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 2;
    char b = 'y';

    if (a==1){
        printf("Opcao escolhida: 1");
    } 
    else if (a==2){
        printf("Opcao escolhida: 2\n");
    } 
    else if (a==3){
        printf("Opcao escolhida: 3");
    }
    else{
        printf("Opcao invalida");
    }

    switch (a)
    {
    case 1:
        printf("Opcao escolhida: 1");
        break;
    
    case 2:
    printf("Opcao escolhida: 2\n");
    break;

    case 3:
    printf("Opcao escolhida: 3");
    break;
    
    default:
    printf("Opcao invalida");
        break;
    }


    switch (b)
    {
    case 'x':
        printf("A letra eh x");

        break;
    
    default:

        printf("\nOpcao Invalida");
        break;
    }
    return 0;
}