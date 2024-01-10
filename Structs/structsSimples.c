#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pessoa
{
    int idade;
    char sexo;
    char nome[255];
};

int main()
{
    struct pessoa fulano;

    strcpy(fulano.nome, "David Galhego");
    fulano.sexo='M';
    fulano.idade=19;

    printf("Nome: %s | Sexo: %c | Idade: %d", fulano.nome, fulano.sexo, fulano.idade);

    struct pessoa listaDePessoas[3];

    strcpy(listaDePessoas[0].nome, "Carol Alves");
    listaDePessoas[0].sexo = 'F';
    listaDePessoas[0].idade = 19;

    strcpy(listaDePessoas[1].nome, "Emilly Edith");
    listaDePessoas[1].sexo = 'F';
    listaDePessoas[1].idade = 20;

    strcpy(listaDePessoas[2].nome, "Geyna");
    listaDePessoas[2].sexo = 'F';
    listaDePessoas[2].idade = 21;

    for(int i = 0; i<3;i++){
        printf("\nNome: %s | Sexo: %c | Idade: %d", listaDePessoas[i].nome, listaDePessoas[i].sexo, listaDePessoas[i].idade);
    }

    return 0;
}