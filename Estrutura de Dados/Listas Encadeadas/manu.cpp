#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

void limpa_tela()
{
    system("CLS");
}

struct pessoa
{
    string nome;
    int rg;
    struct pessoa *proximo;
};

int tamanho_encadeada(pessoa *ponteiro_principal)
{
    int tamanho = 0;
    pessoa *p = ponteiro_principal;
    if (p->nome == "")
    {
        return tamanho;
    }
    else
    {
        while (p != NULL)
        {
            tamanho++;
            p = p->proximo;
        }
        return tamanho;
    }
}

void imprimi_encadeada(pessoa *ponteiro_principal)
{
    int i = 0;
    pessoa *p = ponteiro_principal;

    if (p->nome == "")
    {
        cout << "\nLista Vazia\n";
    }
    else
    {
        while (p != NULL)
        {

            cout << "\n"
                 << i << " - Nome: " << p->nome << " || RG: " << p->rg;
            p = p->proximo;
            i++;
        }
    }
}

void adcComecoEncadeada(pessoa *&ponteiro_principal, string nome, int rg)
{
    pessoa *novapessoa = new pessoa;
    novapessoa->nome = nome;
    novapessoa->rg = rg;
    if (ponteiro_principal->nome == "")
    {
        ponteiro_principal = novapessoa;
        ponteiro_principal->proximo = NULL;
    }
    else
    {
        novapessoa->proximo = ponteiro_principal;
        ponteiro_principal = novapessoa;
    }
}

void adcFinalEncadeada(pessoa *&ponteiro_principal, string nome, int rg)
{
    pessoa *novapessoa = new pessoa;
    novapessoa->nome = nome;
    novapessoa->rg = rg;
    pessoa *p = ponteiro_principal;
    while (p != NULL)
    {
        if (p->proximo == NULL)
        {
            p->proximo = novapessoa;
            novapessoa->proximo = NULL;
        }
        p = p->proximo;
    }
}

void adcPosicaoEncadeada(pessoa *ponteiro_principal, string nome, int rg, int posicao)
{
    pessoa *p = ponteiro_principal;
    int cont = 0;
    pessoa *novapessoa = new pessoa;
    novapessoa->nome = nome;
    novapessoa->rg = rg;
    novapessoa->proximo = NULL;
    while (cont <= posicao)
    {
        if (cont == posicao - 1)
        {
            pessoa *aux = new pessoa;
            aux->proximo = p->proximo;
            p->proximo = novapessoa;
            novapessoa->proximo = aux->proximo;

            free(aux);
        }
        p = p->proximo;
        cont++;
    }
}

void RemoverInicioEncadeada(pessoa *&ponteiro_principal_encadeada, string *nome, int *rg)
{
    *nome = ponteiro_principal_encadeada->nome;
    *rg = ponteiro_principal_encadeada->rg;

    if (ponteiro_principal_encadeada->proximo == NULL)
    {
        pessoa *novapessoa = new pessoa;
        novapessoa->nome = "";
        novapessoa->rg = 0;
        novapessoa->proximo = NULL;
        ponteiro_principal_encadeada = novapessoa;
    }
    else
    {
        ponteiro_principal_encadeada = ponteiro_principal_encadeada->proximo;
    }
}

void RemoverFinalEncadeada(pessoa *&ponteiro_principal, string *nome, int *rg)
{
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;
    p = ponteiro_principal;
    while (p->proximo != NULL)
    {
        aux = p;
        p = p->proximo;
    }
    *nome = p->nome;
    *rg = p->rg;
    aux->proximo = NULL;

    free(p);
}

void RemoverPosicaoNEncadeada(pessoa *&ponteiro_principal, string *nome, int *rg, int posicao)
{
    pessoa *p = ponteiro_principal;
    int cont = 0;
    while (cont <= posicao)
    {
        if (cont == posicao - 1)
        {
            pessoa *aux = new pessoa;
            aux = p->proximo;
            *nome = aux->nome;
            *rg = aux->rg;
            p->proximo = aux->proximo;
            free(aux);
        }
        p = p->proximo;
        cont++;
    }
}

string retornaNomeEncadeada(pessoa *ponteiro_principal, int rg){
    pessoa *p = ponteiro_principal;
    string nome = "Nome nao encontrado";
    while(p!=NULL){
        if(p->rg==rg){
            nome = p->nome;
            return nome;
        }
        p=p->proximo;
    }
    return nome;
}

int main()
{

    pessoa *ponteiro_principal_encadeada = new pessoa;
    ponteiro_principal_encadeada->nome = "";
    ponteiro_principal_encadeada->rg = 0;
    ponteiro_principal_encadeada->proximo = NULL;

    int funcaoDesejada = 1;

    while (funcaoDesejada < 9 && funcaoDesejada > 0)
    {

        cout << "\nOPERACOES:\n";
        cout << "1 - Insercao de um node no inicio da lista\n";
        cout << "2 - Insercao de um node no fim da lista\n";
        cout << "3 - Insercao de um node na posicao N\n";
        cout << "4 - Retirar de um node no inicio da lista\n";
        cout << "5 - Retirar de um node no fim da lista\n";
        cout << "6 - Retirar de um node na posicao N\n";
        cout << "7 - Procurar um node com o campo RG\n";
        cout << "8 - Imprimir a Lista.\n";
        cout << "9 - Sair do Sistema.\n";
        cout << "Escolha um numero e pressione ENTER: \n";
        cin >> funcaoDesejada;
        limpa_tela();
        string nome;
        int rg;

        switch (funcaoDesejada)
        {
        case 1:
            cout << "Funcao Escolhida: 1 - Insercao de um node no inicio da lista\n";
            cout << "\nNome: ";
            cin >> nome;
            cout << "\nRG: ";
            cin >> rg;

            adcComecoEncadeada(ponteiro_principal_encadeada, nome, rg);

            break;

        case 2:
            cout << "Funcao Escolhida: 2 - Insercao de um node no fim da lista\n";
            cout << "\nNome: ";
            cin >> nome;
            cout << "\nRG: ";
            cin >> rg;
            if (tamanho_encadeada(ponteiro_principal_encadeada) == 0)
            {
                adcComecoEncadeada(ponteiro_principal_encadeada, nome, rg);
            }
            else
            {
                adcFinalEncadeada(ponteiro_principal_encadeada, nome, rg);
            }

            break;

        case 3:
            int posicao;

            cout << "Funcao Escolhida: 3 - Insercao de um node na posicao N\n";
            cout << "\nDigite aqui a posicao N: ";
            cin >> posicao;
            cout << "\nNome: ";
            cin >> nome;
            cout << "\nRG: ";
            cin >> rg;

            if (posicao == 0)
            {
                adcComecoEncadeada(ponteiro_principal_encadeada, nome, rg);
            }
            else if (posicao == tamanho_encadeada(ponteiro_principal_encadeada))
            {
                adcFinalEncadeada(ponteiro_principal_encadeada, nome, rg);
            }
            else
            {
                adcPosicaoEncadeada(ponteiro_principal_encadeada, nome, rg, posicao);
            }

            break;

        case 4:
            if (tamanho_encadeada(ponteiro_principal_encadeada) == 0)
            {
                cout << "\nLista Vazia!\n";
            }
            else
            {
                cout << "\nFuncao Escolhida: 4 - Remover um node do inicio da lista\n";
                RemoverInicioEncadeada(ponteiro_principal_encadeada, &nome, &rg);
                cout << "\nO nome: " << nome << " com Rg: " << rg << " foi removido do inicio";
            }
            break;

        case 5:
            if (tamanho_encadeada(ponteiro_principal_encadeada) == 0)
            {
                cout << "\nLista Vazia!\n";
            }
            else if (tamanho_encadeada(ponteiro_principal_encadeada) == 1)
            {
                RemoverInicioEncadeada(ponteiro_principal_encadeada, &nome, &rg);
                cout << "\nO nome: " << nome << " com Rg: " << rg << " foi removido do inicio";
            }
            else
            {
                cout << "\nFuncao Escolhida: 5 - Remover um node do final da lista\n";
                RemoverFinalEncadeada(ponteiro_principal_encadeada, &nome, &rg);
                cout << "\nO nome: " << nome << " com Rg: " << rg << " foi removido do final";
            }
            break;



        case 6:
            
            cout << "Funcao Escolhida: 6 - Retirar de um node na posicao N\n";
            cout << "\nDigite aqui a posicao N: ";
            cin >> posicao;
            if (tamanho_encadeada(ponteiro_principal_encadeada) == 0)
            {
                cout << "Lista Vazia!!!\n";
            }
            else if (posicao == 0)
            {
                RemoverInicioEncadeada(ponteiro_principal_encadeada, &nome, &rg);
                cout << "\nO nome: " << nome << " com Rg: " << rg << " foi removido do inicio";
            }
            else if (posicao == tamanho_encadeada(ponteiro_principal_encadeada) - 1)
            {
                RemoverFinalEncadeada(ponteiro_principal_encadeada, &nome, &rg);
                cout << "\nO nome: " << nome << " com Rg: " << rg << " foi removido do final";
            }
            else
            {
                RemoverPosicaoNEncadeada(ponteiro_principal_encadeada, &nome, &rg, posicao);
                cout << "\nO nome: " << nome << " com Rg: " << rg << " foi removido da posicao\n " << posicao;
            }
            break;

            case 7:
                 if(tamanho_encadeada(ponteiro_principal_encadeada)==0){
                cout << "\nLista Vazia!!!\n";
            } else{
                cout << "\nFuncao Escolhida: 7 - Procurar um node com o campo RG\n";
                int rg;
                cout << "Digite aqui o rg da pessoa que procuras: ";
                cin >> rg;
                cout << "Nome vinculado ao Rg "<< rg<< " : "<<retornaNomeEncadeada(ponteiro_principal_encadeada, rg);
            }
            break;


            case 8:
            cout << "Tamanho Atual da Lista Encadeada = " << tamanho_encadeada(ponteiro_principal_encadeada);
            imprimi_encadeada(ponteiro_principal_encadeada);
            break;
    }
        }
        

  return 0; 
}

