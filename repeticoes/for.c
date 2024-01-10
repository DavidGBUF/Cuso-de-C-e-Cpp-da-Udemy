#include <stdio.h>
#include <stdlib.h>

int main() {
    for(int i = 1; i<=10; i++){
        printf("\n7 X %d = %d", i, i*7);
    }


    printf("\n");

    for(int i = 0; i<=100; i=i+2){
        printf("\n%d", i);
    }

    printf("\n");
    for(int i = 100; i>=0; i--){
        printf("\n%d", i);
    }
    return 0;



}