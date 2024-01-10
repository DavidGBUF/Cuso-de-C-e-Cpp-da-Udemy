#include <stdio.h>
#include <stdlib.h>
void mostrasoma(int num1, int num2);
int retorna_soma(int num1, int num2);
int main(){
    int a = 5, b = 7;
    mostrasoma(a,b);

    printf("Novamente, a soma de %d e %d eh: %d", a,b, retorna_soma(a,b));
    return 0;
}

void mostrasoma(int num1,int num2){
    printf("\nA soma de %d e %d eh: %d\n", num1,num2,num1+num2);
}

int retorna_soma(int num1, int num2){
    return num1+num2;
}