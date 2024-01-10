#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
#include <unistd.h>

using namespace std;

// Função para limpar a tela do console (compatível com Windows e Linux)
void limparTela()
{
    system("CLS");
}

// Função para preencher a matriz do tabuleiro com '-' inicialmente
void preencher_matriz(char tabuleiro[3][3])
{
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            tabuleiro[linha][coluna] = '-';
        }
    }
}

// Função para exibir o tabuleiro na tela
void exibir_tabuleiro(char tabuleiro[3][3])
{
    cout << "\n";
    for (int linha = 0; linha < 3; linha++)
    {
        for (int coluna = 0; coluna < 3; coluna++)
        {
            if (coluna < 2)
            {
                cout << tabuleiro[linha][coluna] << " | ";
            }
            else
            {
                cout << tabuleiro[linha][coluna];
            }
        }
        if (linha < 2)
        {
            cout << "\n-----------\n";
        }
        else
        {
            cout << "\n";
        }
    }
}

// Função para verificar o estado do tabuleiro e determinar se houve vitória ou empate
int confere_tabuleiro(char tabuleiro[3][3])
{
    for (int linha = 0; linha < 3; linha++)
    {
        if (tabuleiro[linha][0] == 'X' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][0] == tabuleiro[linha][2])
        {
            return 1; // Jogador 1 (X) venceu
        }
        else if (tabuleiro[linha][0] == 'O' && tabuleiro[linha][0] == tabuleiro[linha][1] && tabuleiro[linha][0] == tabuleiro[linha][2])
        {
            return 2; // Jogador 2 (O) venceu
        }
    }

    for (int coluna = 0; coluna < 3; coluna++)
    {
        if (tabuleiro[0][coluna] == 'X' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[0][coluna] == tabuleiro[2][coluna])
        {
            return 1; // Jogador 1 (X) venceu
        }
        else if (tabuleiro[0][coluna] == 'O' && tabuleiro[0][coluna] == tabuleiro[1][coluna] && tabuleiro[0][coluna] == tabuleiro[2][coluna])
        {
            return 2; // Jogador 2 (O) venceu
        }
    }

    if (tabuleiro[0][0] == 'X' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2])
    {
        return 1; // Jogador 1 (X) venceu
    }
    else if (tabuleiro[0][0] == 'O' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2])
    {
        return 2; // Jogador 2 (O) venceu
    }

    if (tabuleiro[0][2] == 'X' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0])
    {
        return 1; // Jogador 1 (X) venceu
    }
    else if (tabuleiro[0][2] == 'O' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0])
    {
        return 2; // Jogador 2 (O) venceu
    }
    return 0; // Jogo em andamento ou empate
}

// Função para exibir o mapa de instruções
void exibir_mapa_de_instrucoes()
{
    cout << "\nMAPA DE INSTRUCOES\n";
    cout << " 7 | 8 | 9";
    cout << "\n-----------\n";
    cout << " 4 | 5 | 6";
    cout << "\n-----------\n";
    cout << " 1 | 2 | 3\n";
}

// Função principal do jogo
int jogo(string nome_do_jogador1, string nome_do_jogador2, int pontuacao_jogador1, int pontuacao_jogador2)
{
    char tabuleiro[3][3];
    int linha_jogada, coluna_jogada, turno_do_jogador = 1, rodada = 1, estadoDeJogo = 0;
    int posicao_jogada;
    string jogador_atual = nome_do_jogador1;
    bool posicionou_elemento;
    preencher_matriz(tabuleiro);

    while (rodada < 9 && estadoDeJogo == 0)
    {
        limparTela();

        cout << "\nRodada: " << rodada << "\n";
        cout << "Pontuacao Atual: " << nome_do_jogador1 << " " << pontuacao_jogador1 << " X " << pontuacao_jogador2 << " " << nome_do_jogador2;
        cout << "\n";
        exibir_tabuleiro(tabuleiro);
        exibir_mapa_de_instrucoes();

        posicionou_elemento = false;
        string mensagem;

        // Mapeamento das posições de jogo para linhas e colunas
        int posicoes[9][2] = {{2, 0}, {2, 1}, {2, 2}, {1, 0}, {1, 1}, {1, 2}, {0, 0}, {0, 1}, {0, 2}};
        while (posicionou_elemento == false)
        {
            cout << mensagem;
            cout << "\n";
            cout << jogador_atual << ", digite uma posicao conforme o mapa acima: ";
            cin >> posicao_jogada;
            linha_jogada = posicoes[posicao_jogada - 1][0];
            coluna_jogada = posicoes[posicao_jogada - 1][1];
            if (tabuleiro[linha_jogada][coluna_jogada] == '-')
            {
                mensagem = "";
                posicionou_elemento = true;
                rodada++;
                if (turno_do_jogador == 1)
                {
                    tabuleiro[linha_jogada][coluna_jogada] = 'X';
                    jogador_atual = nome_do_jogador2;
                    turno_do_jogador = 2;
                }
                else
                {
                    tabuleiro[linha_jogada][coluna_jogada] = 'O';
                    jogador_atual = nome_do_jogador1;
                    turno_do_jogador = 1;
                }
            }
            else
            {
                mensagem = "\nEssa posicao ja foi jogada!\n";
            }
        }

        estadoDeJogo = confere_tabuleiro(tabuleiro);
        if (estadoDeJogo == 1)
        {
            limparTela();
            exibir_tabuleiro(tabuleiro);
            cout << "O jogador " << nome_do_jogador1 << " venceu!!!";
            pontuacao_jogador1++;
        }
        else if (estadoDeJogo == 2)
        {
            limparTela();
            exibir_tabuleiro(tabuleiro);
            cout << "O jogador " << nome_do_jogador2 << " venceu!!!";
            pontuacao_jogador2++;
        }
    }
    if (rodada == 9)
    {
        int escolha;
        cout << "\nEMPATE!!!\nO que fazer agora?\n1 - Jogar novamente\n2 - Voltar ao Menu\n3 - Sair";
        cout << "\nDigite aqui o numero de sua escolha: ";
        cin >> escolha;
        if (escolha == 1)
        {
            jogo(nome_do_jogador1, nome_do_jogador2, pontuacao_jogador1, pontuacao_jogador2);
        }
        else if (escolha == 2)
        {
            return 0;
        }
        else
        {
            cout << "\nAte mais!!!";
            return 3;
        }
    }
    int decisao;
    cout << "\nFim de jogo\nO que fazer agora?\n1 - Jogar novamente\n2 - Voltar ao Menu\n3 - Sair";
    cout << "\nDigite aqui o numero de sua escolha: ";
    cin >> decisao;
    if (decisao == 1)
    {
        jogo(nome_do_jogador1, nome_do_jogador2, pontuacao_jogador1, pontuacao_jogador2);
    }
    else if (decisao == 2)
    {
        return 0;
    }

    cout << "\nAte mais!!!";
    return 3;
}

// Função para exibir o menu principal
void menu()
{
    string nome_do_jogador1, nome_do_jogador2;
    int opcao = 0, pontuacao_jogador1 = 0, pontuacao_jogador2 = 0;

    while (opcao < 1 || opcao > 3)
    {
        limparTela();
        cout << "\nJOGO DA VELHA!!!\n";
        cout << "Digite o numero de sua opcao: \n";
        cout << "1 - Jogar\n";
        cout << "2 - Sobre o jogo\n";
        cout << "3 - Sair\n";
        cout << "Sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "\nDigite aqui o nome do jogador 1: ";
            cin >> nome_do_jogador1;

            cout << "\nDigite aqui o nome do jogador 2: ";
            cin >> nome_do_jogador2;
            opcao = jogo(nome_do_jogador1, nome_do_jogador2, pontuacao_jogador1, pontuacao_jogador2);
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

// Função principal
int main()
{
    srand((unsigned)time(NULL));

    menu();
    return 0;
}
