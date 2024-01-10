#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>
#include <time.h>
#include <unistd.h>

using namespace std;

void limparTela()
{
    system("CLS");
}

void preencher_tabuleiro_agua(char tabuleiro[10][10], char tabuleiro_mascarado[10][10])
{
    for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            tabuleiro[linha][coluna] = 'A';
            tabuleiro_mascarado[linha][coluna] = '*';
        }
    }
}

void montar_mapa_superior(){
    cout<<"    ";
    for(int a=0;a<10;a++){
        cout<<" "<<a<<" ";
    }
    cout << "\n";
    cout<<"    ";
    for(int a=0;a<10;a++){
        cout<<" "<<"|"<<" ";
    }
    cout << "\n";
}

void exibir_tabuleiro(char tabuleiro[10][10], char tabuleiro_mascarado[10][10], bool mostrar_cola)
{
    char blue[] = { 0x1b, '[', '1', ';', '3', '4', 'm', 0 };
    char green[] = { 0x1b, '[', '1', ';', '3', '2', 'm', 0 };
    char normal[] = { 0x1b, '[', '1', ';', '3', '9', 'm', 0 };

    montar_mapa_superior();
    for (int linha = 0; linha < 10; linha++)
    {
        cout<< linha<<" - ";
        for (int coluna = 0; coluna < 10; coluna++)
        {
            switch (tabuleiro_mascarado[linha][coluna])
            {
            case 'A':
                cout << blue << " " << tabuleiro_mascarado[linha][coluna] << " "<< normal;
                break;
            
            case 'P':
                cout << green << " " << tabuleiro_mascarado[linha][coluna] << " "<< normal;
                break;
            default:
               cout << " " << tabuleiro_mascarado[linha][coluna] << " ";
               break;
            }
            
        }
        cout << "\n";
    }

    cout << "\n\n";
    if(mostrar_cola){
        for (int linha = 0; linha < 10; linha++)
    {
        for (int coluna = 0; coluna < 10; coluna++)
        {
            cout << " " << tabuleiro[linha][coluna] << " ";
            
        }
        cout << "\n";
    }
    }
     
}

void posiciona_barcos(char tabuleiro[10][10]){
    int quantidade = 20, quantidade_posicionada=0;

    while(quantidade_posicionada<quantidade){
        int linha_aleatoria=rand()%10;
        int coluna_aleatoria=rand()%10;
        if(tabuleiro[linha_aleatoria][coluna_aleatoria]=='A'){
            tabuleiro[linha_aleatoria][coluna_aleatoria]='P';
            quantidade_posicionada++;
        }
        
    }
    
}

void verifica_tiro(char tabuleiro[10][10],char tabuleiro_mascarado[10][10], int linha_jogada, int coluna_jogada, int *pontos,string *mensagem
, int *tentativas)
{
    if(tabuleiro_mascarado[linha_jogada][coluna_jogada]!='*'){
        *mensagem="\nOpa! Voce ja atacou essa posicao!!!";
    }else{
        switch (tabuleiro[linha_jogada][coluna_jogada])
        {
        case 'P':
            *pontos=*pontos+10;
            *mensagem="\nParabens!!!, voce acertou um barco pequeno!";
            break;  

        case 'A':
            
            *mensagem="\nCatapimbas!!!Voce Acertou a agua!!!";
            (*tentativas)++;
            break;  
        }
    }

}
int joga(string nome_do_jogador)
{
    char tabuleiro[10][10], mascara[10][10];
    int linha_jogada, coluna_jogada, tentativas=0,max_tentativas=10, pontos=0;
    string mensagem="\n"+nome_do_jogador+", Seja Bem-Vindo!!!";

    preencher_tabuleiro_agua(tabuleiro, mascara);
    posiciona_barcos(tabuleiro);

    while (tentativas<max_tentativas)
    {
        linha_jogada=-1, coluna_jogada=-1;
        limparTela();
        exibir_tabuleiro(tabuleiro, mascara, false);
        cout << mensagem;
        cout << "\nPontuacao:" << pontos << " || Tentativas Restantes: "<< max_tentativas-tentativas;
        while((linha_jogada<0 || coluna_jogada<0) || (linha_jogada>9 || coluna_jogada>9)){
        linha_jogada=-1, coluna_jogada=-1;
        cout << "\n"<<nome_do_jogador<<", Digite o numero de uma linha entre 0 e 9: ";
        cin >> linha_jogada;
        cout << "\nDigite o numero de uma coluna entre 0 e 9: ";
        cin >> coluna_jogada;
        }
        
        verifica_tiro(tabuleiro,mascara, linha_jogada,coluna_jogada,&pontos, &mensagem, &tentativas);
        
        
        mascara[linha_jogada][coluna_jogada]=tabuleiro[linha_jogada][coluna_jogada];
    }
    int opcao;
    limparTela();
    cout << "\nO jogo Acabou!!! Sua pontuacao foi de " << pontos << " pontos";
    cout << "\nO que deseja fazer?\n1 - Jogar novamente\n2 - Voltar ao Menu\n3 - Sair\nDigite aqui: ";
    cin >> opcao;
    switch (opcao)
    {
    case 1:
        joga(nome_do_jogador);
        break;
    
    case 2:
    return 0;
        break;
    
    default:
    limparTela();
    cout<<"\nAte mais!!!";
    }
    return 3;
    
}

void menu()
{
    string nome_do_jogador;
    int opcao = 0;

    while (opcao < 1 || opcao > 3)
    {
        limparTela();
        cout << "\nJOGO DA BATALHA NARVAL!!!\n";
        cout << "Digite o numero de sua opcao: \n";
        cout << "1 - Jogar sozinho\n";
        cout << "2 - Sobre o jogo\n";
        cout << "3 - Sair\n";
        cout << "Sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite aqui o seu nome: ";
            cin >> nome_do_jogador;
            opcao = joga(nome_do_jogador);
           
            break;

        case 2:
            limparTela();
            cout << "\nInformacoes sobre o jogo:\n";
            cout << "Este simples jogo foi desenvolvido por David Galhego em 2024 enquanto fazia um curso de c++";
            cout << "\nDeseja Reiniciar?\n1 - Sim\n2 - Nao\nDigite aqui: ";
            cin >> opcao;
            if (opcao == 1)
            {
                opcao = 0;
            }
            else
            {
                cout << "Ate mais!!!";
            }
            break;

        case 3:
            cout << "\nAte mais!!!\n";
            break;

        default:
            cout << "\nOpcao Invalida, tente novamente!!! \n";
            sleep(2);
            break;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
   
    menu();
    return 0;
}
