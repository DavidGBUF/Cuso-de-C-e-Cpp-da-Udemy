#include <stdio.h>
#include <stdlib.h>

void limpar_tela(){
    system("CLS");
}

int main(){
    int a;

    printf("Digite um valor para a variavel a: ");
    scanf("%d", &a);
    limpar_tela();
    printf("O valor de a eh: %d\nFim do programa!", a);
    return 0;
}
