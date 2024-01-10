#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    while (1==1){
        printf("\nMenu de Escolhas! Escolha o numero de Opcao:");
        printf("\n 1 - Caminho 1");
        printf("\n 2 - Caminho 2");
        printf("\n 3 - Caminho 3");
        printf("\n 4 - Encerrar programa");
        printf("\nSua Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nCaminho 1 Escolhido");
            break;

        case 2:
            printf("\nCaminho 2 Escolhido");
            break;

        case 3:
            printf("\nCaminho 3 Escolhido");
            break;
        
        default:
            if (opcao!=4){
            printf("\nOpcao Invalida, tente novamente.\n");
            break;
            } 
        }

        if  (opcao==4){
            break;
        }

    }

     printf("\n Programa Encerrado!");
    return 0;
}