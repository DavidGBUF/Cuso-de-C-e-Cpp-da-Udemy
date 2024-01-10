#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool retorna_bool(){
    return false;
}

int main(){
    bool variavel_bool;
    variavel_bool = retorna_bool();


    printf("\n valor de bool eh: %d\n", variavel_bool);
    if(variavel_bool){
        printf("Eh verdadeiro!");
    } else{
        printf("Eh falso!");
    }
    return 0;
}