#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont=10;
    while(cont>=0){
        printf("\n%d", cont);
        cont--;
    }

    cont = 10;
    do{
        printf("\n%d", cont);
        cont--;
    } while (cont >=0);


    for(int i = 10; i>=0;i--){
         printf("\n%d", i);
    }
    
    return 0;
}