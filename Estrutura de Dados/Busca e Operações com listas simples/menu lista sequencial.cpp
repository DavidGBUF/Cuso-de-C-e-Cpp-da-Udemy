#include <stdio.h>
#include <iostream>
#include <new>
#include <string>

using namespace std;



struct pessoa
{
    string nome;
    int rg;
};

void limpa_tela(){
    system("CLS");
}

void imprimi_sequencial(pessoa *lista,int tam_lista){
    for(int i = 0; i<tam_lista;i++){
        cout << "\n"<< i <<" - Nome: " << lista[i].nome;
        cout << " || RG: " << lista[i].rg;
    }
}

void adcComecoSequencial(pessoa *&ponteiroPrincipal, string nome, int rg, int *tamanho){
    if(tamanho==0){
    pessoa *nova_lista_sequencial = new pessoa[1];
    nova_lista_sequencial[0].nome=nome;
    nova_lista_sequencial[0].rg = rg;
    ponteiroPrincipal = nova_lista_sequencial;
    } else{
    pessoa *nova_lista_sequencial = new pessoa[*tamanho+1];
    nova_lista_sequencial[0].nome=nome;
    nova_lista_sequencial[0].rg = rg;

    for(int i=0;i<*tamanho;i++){
        nova_lista_sequencial[i+1].nome = ponteiroPrincipal[i].nome;
        nova_lista_sequencial[i+1].rg = ponteiroPrincipal[i].rg;
    }
     ponteiroPrincipal = nova_lista_sequencial;


    }
    (*tamanho)++;

}

void adcFimSequencial(pessoa *&ponteiroPrincipal, string nome, int rg, int *tamanho){
    if(tamanho==0){
    pessoa *nova_lista_sequencial = new pessoa[1];
    nova_lista_sequencial[0].nome=nome;
    nova_lista_sequencial[0].rg = rg;
    ponteiroPrincipal = nova_lista_sequencial;
    }else{

        pessoa *nova_lista_sequencial = new pessoa[*tamanho+1];
        nova_lista_sequencial[*tamanho].nome=nome;
        nova_lista_sequencial[*tamanho].rg = rg;

        for(int i=0;i<*tamanho;i++){
            nova_lista_sequencial[i].nome = ponteiroPrincipal[i].nome;
            nova_lista_sequencial[i].rg = ponteiroPrincipal[i].rg;
            }
            ponteiroPrincipal = nova_lista_sequencial;
            }
            (*tamanho)++;
}


void adcPosicaoNSequencial(pessoa *&ponteiroPrincipal, string nome, int rg, int *tamanho, int posicao_n){
    if(*tamanho<posicao_n){
    cout << "A posicao ultrapassa o tamanho do vetor";
    }else{

        pessoa *nova_lista_sequencial = new pessoa[*tamanho+1];
        nova_lista_sequencial[posicao_n].nome=nome;
        nova_lista_sequencial[posicao_n].rg = rg;

        for(int i=0;i<posicao_n;i++){
            nova_lista_sequencial[i].nome = ponteiroPrincipal[i].nome;
            nova_lista_sequencial[i].rg = ponteiroPrincipal[i].rg;
            }
        
        for(int i=posicao_n+1;i<*tamanho+1;i++){
            nova_lista_sequencial[i].nome = ponteiroPrincipal[i-1].nome;
            nova_lista_sequencial[i].rg = ponteiroPrincipal[i-1].rg;
            }
        
            ponteiroPrincipal = nova_lista_sequencial;

        (*tamanho)++;
        }
        
}

void RemoverComecoSequencial(pessoa *&ponteiroprincipal, int *tamanho){
    pessoa *novovetor = new pessoa[*tamanho-1];
    for(int i = 1; i< *tamanho;i++){
        novovetor[i-1].nome = ponteiroprincipal[i].nome;
        novovetor[i-1].rg = ponteiroprincipal[i].rg;
    }
    ponteiroprincipal = novovetor;
    (*tamanho)--;
}

void RemoverFinalSequencial(pessoa *&ponteiroprincipal, int *tamanho){
    pessoa *novovetor = new pessoa[*tamanho-1];
    for(int i = 0; i< *tamanho - 1;i++){
        novovetor[i].nome = ponteiroprincipal[i].nome;
        novovetor[i].rg = ponteiroprincipal[i].rg;
    }
    ponteiroprincipal = novovetor;
    (*tamanho)--;
}

void RemoverPosicaoNSequencial(pessoa *&ponteiroprincipal, int *tamanho, int posicao_n){
    pessoa *novovetor = new pessoa[*tamanho-1];
    for(int i = 0; i<*tamanho - 1 ;i++){
        if(i<posicao_n){
        novovetor[i].nome = ponteiroprincipal[i].nome;
        novovetor[i].rg = ponteiroprincipal[i].rg;
        }else{
            novovetor[i].nome = ponteiroprincipal[i+1].nome;
            novovetor[i].rg = ponteiroprincipal[i+1].rg;

        }

    }
    ponteiroprincipal = novovetor;
    (*tamanho)--;

}


string retornaNomeSequencial(pessoa *&ponteiroSequencial, int tamanho, int rg){
    string nome = "Nome nao encontrado";
    for(int i = 0; i<tamanho;i++){
        if(ponteiroSequencial[i].rg== rg){
            nome = ponteiroSequencial[i].nome;
            cout << "\nEncontrado na posicao: " << i << "\n";
        }
    }
    return nome;
}




int main(){
    pessoa *ponteiroSequencial;
    int funcaoDesejada=1, tamanho_da_lista=0;
    
    while(funcaoDesejada<9 && funcaoDesejada>0){
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

            adcComecoSequencial(ponteiroSequencial, nome, rg, &tamanho_da_lista);

            break;

        case 2:
            cout << "Funcao Escolhida: 2 - Insercao de um node no fim da lista\n";
            cout << "\nNome: ";
            cin >> nome;
            cout << "\nRG: ";
            cin >> rg;

            adcFimSequencial(ponteiroSequencial,nome,rg,&tamanho_da_lista);
            break;


        case 3:
            int posicao_n;
            cout << "Funcao Escolhida: 2 - Insercao de um node na posicao N\n";
            cout << "\nNome: ";
            cin >> nome;
            cout << "\nRG: ";
            cin >> rg;
            cout << "\nPosicao N para o novo elemento: ";
            cin >> posicao_n;


            if(posicao_n==0){
                adcComecoSequencial(ponteiroSequencial,nome,rg,&tamanho_da_lista);
            } else if(posicao_n == tamanho_da_lista+1){
                adcFimSequencial(ponteiroSequencial,nome,rg,&tamanho_da_lista);
            } else{
                adcPosicaoNSequencial(ponteiroSequencial,nome,rg,&tamanho_da_lista,posicao_n);
            }

            
            break;

        case 4:
        if(tamanho_da_lista==0){
            cout << "\nO Vetor esta  vazio!";
        } else{
            RemoverComecoSequencial(ponteiroSequencial, &tamanho_da_lista);
        }
            break;

        case 5:
            if(tamanho_da_lista==0){
                cout << "\nO Vetor esta  vazio!";
            } else{
                RemoverFinalSequencial(ponteiroSequencial, &tamanho_da_lista);
            break;


        case 6:
            int posicao_n;
            cout << "\nDigite Aqui a posicao do elemento que desejas remover: ";
            cin >> posicao_n;
            if(tamanho_da_lista==0){
                cout << "\nO Vetor esta  vazio!";
            } else if(posicao_n==0){
                RemoverComecoSequencial(ponteiroSequencial, &tamanho_da_lista);
            } else if(posicao_n==(tamanho_da_lista-1)){
                cout << "posicao: " << posicao_n << "tamanho: " << tamanho_da_lista;
                RemoverFinalSequencial(ponteiroSequencial, &tamanho_da_lista);
            } else{
                RemoverPosicaoNSequencial(ponteiroSequencial, &tamanho_da_lista, posicao_n);
            }
            break;

        
        case 7:
            
            if(tamanho_da_lista==0){
                cout << "\nLista Vazia!!!\n";
            } else{
                cout << "\nFuncao Escolhida: 7 - Procurar um node com o campo RG\n";
                int rg;
                cout << "Digite aqui o rg da pessoa que procuras: ";
                cin >> rg;
                cout << "Nome vinculado ao Rg "<< rg<< " : "<<retornaNomeSequencial(ponteiroSequencial,tamanho_da_lista, rg);
            }
            break;

        

        case 8:
            string sair=" ";
            imprimi_sequencial(ponteiroSequencial, tamanho_da_lista);
            cout <<"\nDigite 1 para Voltar ao Menu: ";
            cin >> sair;
            limpa_tela();

            break;

        
        }
    }
    }
    return 0;
    }