#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 1;
    while (a<=10){
    printf("\n%d", a);
    a++;
    }

    a = 20;
    do
    {
        a++;
        printf("\n%d", a);
        
    } while (a<=10);
    
    return 0;
}