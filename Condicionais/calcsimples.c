#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float num1, num2;

    printf("Digite o 1* Numero: ");
    scanf("%f", &num1);

    printf("Digite o 2* Numero: ");
    scanf("%f", &num2);

    printf("\nAgora Digite o numero de sua opcao de operacao:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao");
    printf("\n5 - Media\nSua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("A soma de %f e %f eh = %f", num1, num2, num1+num2);
        break;

    case 2:
        printf("A subtracao de %f e %f eh = %f", num1, num2, num1-num2);
        break;

    case 3:
        printf("A multiplicacao de %f e %f eh = %f", num1, num2, num1*num2);
        break;

    case 4:
        if(num2==0){
            printf("Impossivel dividir por 0");
            break;
        }
        printf("A multiplicacao de %f e %f eh = %f", num1, num2, num1/num2);
        break;

    case 5:
        printf("A media de %f e %f eh = %f", num1, num2, (num1+num2)/2);
        break;
    

    default:
        printf("Opcao inválida");
        break;
    }
    return 0;
}