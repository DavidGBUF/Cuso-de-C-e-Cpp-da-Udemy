#include <stdio.h>
#include <stdlib.h>

char retornaletra(){
    return 65;
}

int main(){
    char letra;
    letra = retornaletra();
    printf("A letra eh: %c",letra);
    return 0;
}