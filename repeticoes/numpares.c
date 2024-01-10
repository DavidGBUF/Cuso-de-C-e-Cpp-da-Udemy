#include <stdio.h>
#include <stdlib.h>

int main(){
    int par = 10;

    while (par <=20){
        printf("\n%d",par);
        par = par +2;
    }

    par = 10;
    do
    {
        printf("\n%d",par);
        par = par +2;
    } while (par <=20);

    for (int i = 10 ; i<=20; i=i+2){
        printf("\n%d",i);
    }
    


    return 0;
}