#include <stdio.h>
#include <stdlib.h>

int main(){
    float lado1, lado2, lado3;

    printf("\nDigite aqui a medida do 1° lado: ");
    scanf("%f", &lado1);

    printf("\nDigite aqui a medida do 2° lado: ");
    scanf("%f", &lado2);

    printf("\nDigite aqui a medida do 3° lado: ");
    scanf("%f", &lado3);

    if (lado1==lado2 && lado2==lado3){
        printf("\nOs tres lados são iguais e por isso formam um triangulo Equilátero");
    } else if (lado1==lado2 || lado2==lado3 || lado1==lado3){
        printf("\nHá dois lados iguais, por isso é possivel formar um triangulo ISOSCELES");
    } else {
        printf("Todos os lados sao diferentes, por isso o triangulo formado eh ESCALENO");
    }

    printf("\n\n");

    system("pause");

    return 0;
}