#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[2][2];

    for(int linha = 0; linha <2 ; linha++){
        for (int coluna = 0; coluna < 2; coluna++)
        {
            printf("\nDigite o valor do elemento [%d,%d]: ",linha, coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }


    
    
    
    for(int linha = 0; linha <2 ; linha++){
        for (int coluna = 0; coluna < 2; coluna++)
        {
            printf("%d ",matriz[linha][coluna]);
        }
        printf("\n");
        
        
    }




        int aux1, aux2;

        aux1=matriz[0][0];
        aux2=matriz[0][1];

        matriz[0][0]=matriz[1][0];
        matriz[0][1]=matriz[1][1];

        matriz[1][0]=aux1;
        matriz[1][1]=aux2;





    printf("\nVersao linha trocada:\n");
    for(int linha = 0; linha <2 ; linha++){
        for (int coluna = 0; coluna < 2; coluna++)
        {
            printf("%d ",matriz[linha][coluna]);
        }
        printf("\n");
        
        
    }

        
        
    
    return 0;
}