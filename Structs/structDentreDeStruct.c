#include <stdio.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;
}Data;


struct aluno
{
    long long id;
    int serie;
    Data nascimento;
};

int main(){
    struct aluno aluno1;

    aluno1.id=202304940012;
    aluno1.serie=3;
    aluno1.nascimento.dia=21;
    aluno1.nascimento.mes = 07;
    aluno1.nascimento.ano = 2004;

    printf("Id: %lld | Serie: %d | Nascimento: %d/%d/%d", aluno1.id, aluno1.serie,
     aluno1.nascimento.dia,aluno1.nascimento.mes,aluno1.nascimento.ano);
    return 0;
}
