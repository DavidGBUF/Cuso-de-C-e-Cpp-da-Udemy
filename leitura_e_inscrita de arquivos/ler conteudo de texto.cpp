#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    int c;
    int cont;
    char Conteudo_texto[255];
    FILE *file;

    file = fopen("Texto de David.txt", "r");


    if(file){
        printf("Oh Yeah");
        int cont=0;
        while(( c = getc(file)) != EOF){
    printf("%c", c);
    Conteudo_texto[cont]=c;
    cont++;
   }
   fclose(file);

    }

printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=--=\n");

for(cont=0;cont<strlen(Conteudo_texto)-1;cont++){
    printf("%c",Conteudo_texto[cont]);
}



    return 0;
}