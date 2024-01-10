#include <stdio.h>
#include <stdlib.h>

int retornadez();
float retorna5ponto5();

int main(){
    int a;
    a = retornadez();
    printf("Valor de a eh: %d", a);

    float b;
    b = retorna5ponto5();
printf("\nO valor de b eh: %f",b);
    return 0;
}

int retornadez(){
    printf("\nDavid o maioral\n");
    return 10;
}

float retorna5ponto5(){
    return 5+0.5;
}