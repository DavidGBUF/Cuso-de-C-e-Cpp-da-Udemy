#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 21;
    if (a>5 && a<15){
        printf("\nA variavel 'a' esta entre 5 e 15");
    }

    if (a>5 || a>15){
        printf("\nA variavel 'a' eh maior que 5 ou 15");
    }

    if ((a>5 && a<15) || a == 20){
        printf("\nA variavel 'a' eh 20 ou esta entre 5 e 15");
    }
    return 0;
}
