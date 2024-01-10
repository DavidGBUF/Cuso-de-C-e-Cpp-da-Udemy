#include <stdio.h>
#include <stdlib.h>

void mostra_sucessor(int num){
    printf("\nO sucessor de %d eh %d\n", num, num+1);
}

int retorna_antecessor(int num){
    return num - 1;
}

int main(){
    int a;
    printf("Digite um valor para 'a': ");
    scanf("%d", &a);

    mostra_sucessor(a);
    printf("O antecessor de %d eh: %d",a, retorna_antecessor(a));

}