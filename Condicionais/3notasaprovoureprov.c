#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float nota1, nota2, nota3, media;
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite aqui a 1° Nota: ");
    scanf("%f", &nota1);

    printf("\nDigite aqui a 2° Nota: ");
    scanf("%f", &nota2);

    printf("\nDigite aqui a 3° Nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf("\nA nota média do aluno foi: %f", media);

    if (media> 7){
        printf("\nO aluno está aprovado");
    } else {
        printf("\nO aluno está reprovado");
    }


    return 0;
}