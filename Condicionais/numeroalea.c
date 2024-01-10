#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned) time(NULL));

    int aleatorio = rand() % 3;

    printf("O numero aleatorio eh: %d", aleatorio);

    int aleatorio2 = (rand()%3)+1;

    printf("\nO numero aleatorio 2 eh: %d", aleatorio2);



    printf("\n");
    system("pause");
    return 0;
}