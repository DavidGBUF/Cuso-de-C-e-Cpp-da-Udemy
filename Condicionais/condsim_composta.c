#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 3, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //COndicionais simples
    if (a==4){
        printf("A variavel a eh = %d", a);

    }
    if (b==2.5){
        printf("\nA variavel b eh = %f", b);
        
    }

    if (c=='x'){
        printf("\nA variavel c eh = %c", c);
        
    }

    //Condicionais compostas
    if (opcao==1){
        printf("\nA opcao = 1");
    } else  if (opcao==2){
        printf("\nA opcao = 2");
    } else  if (opcao=3){
        printf("\nA opcao = 3");
    }

    // Numero par ou impar
    if (a % 2 != 0){
        printf("\nO numero a eh impar");
    } else {
        printf("\nO numero a eh par");
    }

    system("pause");

    return 0;
}