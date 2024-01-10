#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Imprimi oi na tela
    printf("Ola!\n");

    int a = 11; 
    printf("O valor em a e = %d", a);
    printf("\nDigite aqui um novo valor para a :");
    scanf("%d", &a);
    printf("O valor em a mudou para = %d", a);

    float teste = 11.9; 
    printf("\nO valor em b e = %f", teste);
    printf("\nDigite aqui um novo valor para b :");
    scanf("%f", &teste);
    printf("\nO valor em b mudou para = %f", teste);


    char letra = 'x'; 
    printf("\nO valor em letra e = %c", letra);
    printf("\nDigite aqui um novo valor para letra :");
    fflush(stdin);
    scanf("%c", &letra);
    printf("\nO valor em letra mudou para = %c", letra);
    
    
}


// #include <stdio.h>
// #include <locale.h>
 
// void main(){
 
// 	//Permite usar acentos
// 	setlocale(LC_ALL,"");
 
//     //Imprime Olá
//     printf("Ola \n");
    
//     //Lendo valor inteiro
//     int a = 50;
//     printf("O valor de a é = %d \n", a);
//     scanf("%d", &a);
//     printf("\nO valor de a mudou para %d", a);
    
//     //Lendo valor quebrado
//     int b = 5.5;
//     printf("O valor de b é = %d \n", b);
//     scanf("%f", &b);
//     printf("O valor de b mudou para %f", b);
    
//     //Lendo letra
//     char letra = 't';
//     printf("\nO valor de c é = %d \n", letra);
//     fflush(stdin);
//     scanf("%c", &letra);
//     printf("O valor de c mudou para %c", letra);
// }
