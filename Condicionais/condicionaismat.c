#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5, b = 10, c =15;
    char d = 'x';
    
    if (2<a){
        printf("\n%d eh maior que 2", a);

    }

    if (c>=b){
        printf("\n%d eh maior ou igual a %d", c,b);
        
    }

     if (10>a){
        printf("\n%d eh menor que 10", a);

    }

    if (10>=a){
        printf("\n%d eh menor ou igual que 10", a);

    }
     if (c!=10){
        printf("\n%d eh diferente de 10", c);

    }

    if (d!='a'){
        printf("\n%c eh diferente de a", d);

    }

    system("\npause");
    return 0;
}