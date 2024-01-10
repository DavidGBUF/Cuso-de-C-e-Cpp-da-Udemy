#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    bool a = true, b = false;
    if (a){
        printf("\nA é verdadeiro");
    }

    if (b){
        printf("\nB é verdadeiro");
    } else{
        printf("\nB é falso");
    }

    if (!b){
        printf("\nB é falso\n");
    }

    system("pause");
    return 0;
}