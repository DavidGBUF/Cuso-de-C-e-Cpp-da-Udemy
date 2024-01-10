// #include <stdio.h>
// #include <stdlib.h>
// # include <locale.h>

// void main(){
//     setlocale(LC_ALL, "");
//     float a,b;

//     printf("Digite aqui o valor da 1 Nota: ");
//     scanf("%f", &a);

//     printf("\nDigite aqui o valor da 2 Nota: ");
//     scanf("%f", &b);

//     float media = (a+b)/2;

//     printf("\nA média entre os valores eh %f", media);

// }




//exercicio Valor Absoluto da Diferença entre Duas Notas

// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//     float nota1, nota2;

//     printf("Digite aqui a nota 1: ");
//     scanf("%f", &nota1);

//     printf("\nDigite aqui a nota 2: ");
//     scanf("%f", &nota2);

//    float diferenca= fabs(nota1 - nota2);

//    printf("\nA diferanca entre as duas notas é de %f pontos", diferenca);

// }



//Ler 3 Valores na mesma linha e Multiplicar

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a,b,c;
    printf("Digite tres numeros inteiros em seguida e eu farem a multiplicacao: ");

    scanf("%d %d  %d", &a,&b,&c);

    printf("O valor da multiplicacao eh = %d" , a * b *c);
    return 0;


}

