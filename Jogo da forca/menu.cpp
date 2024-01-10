#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>


using namespace std;

void limparTela(){
    system("CLS");
}

string retorna_palavra_aleatoria(){
    string palavras[3]={"abacaxi", "morango","manga"};
    int indicealeatorio = rand() % 3;
    string palavra = palavras[indicealeatorio];
    return palavra;
}

string retorna_palavra_com_mascara(int tamanho_da_palavra){
    string palavra_mascarada;
    int cont = 0;
    while(cont!=tamanho_da_palavra){
        palavra_mascarada+="_";
        cont++;
    }
    return palavra_mascarada;
}

void exibe_status(string palavra_mascarada, int tamanho_da_palavra, int tentativas_restantes, string letrasJaArriscadas, string mensagem){
    cout << mensagem;
    cout << "Palavra: " << palavra_mascarada << "  || Tamanho: " << tamanho_da_palavra;
    cout << "\nLetras ja arriscadas: ";
    for(size_t i = 0; i< letrasJaArriscadas.size(); i++){
        cout << letrasJaArriscadas[i] << ", ";
    }
    cout << "\nTentativas Restantes: " << tentativas_restantes;

}
int joga(int num_jogadores){
    string palavra;
    if(num_jogadores==1){
        palavra =retorna_palavra_aleatoria();
    } else{
        cout << "\nDigite aqui a palavra para desafiar o segundo jogador\n";
        cin >> palavra;
        for(size_t a=0;a<palavra.size();a++){
            palavra[a]=tolower(palavra[a]);
        }

    }
    int tamanho_da_palavra=palavra.size();
    string palavra_mascarada = retorna_palavra_com_mascara(tamanho_da_palavra);
    
    int tentativas = 0, maxtentativas=5,cont =0;
    int i=0, opcao;
    string letrasJaArriscadas;
    char letra;
    string mensagem = "Bem Vindo ao jogo!!!\n";
    

    while( palavra_mascarada!=palavra && maxtentativas-tentativas>0){
        //cout << "A palavra secreta eh: " << palavra << " e seu tamanho eh: "<< tamanho_da_palavra;
        limparTela();
        exibe_status(palavra_mascarada,tamanho_da_palavra,maxtentativas-tentativas, letrasJaArriscadas, mensagem);
        i=0;
        bool jaDigitouAletra = false;
        
        cout << "\nDigite uma Letra ou 1 para arriscar uma palavra: ";
        cin >> letra;

        if(letra=='1'){
            string palavra_arriscada;
            cout << "\nDigite sua palavra chute: ";
            cin >> palavra_arriscada;
            if(palavra_arriscada==palavra){
                palavra_mascarada = palavra_arriscada;
            }else{
                
                tentativas=maxtentativas;
            }
        }else{
            letra=tolower(letra);
        }

        for(size_t i =0;i<letrasJaArriscadas.size();i++){
            if(letrasJaArriscadas[i] == letra){
                mensagem ="\nEssa letra ja foi digitada!!!\n";
                jaDigitouAletra=true;
                
            }
        }
        if(jaDigitouAletra == false){
            letrasJaArriscadas+=letra;

             for(cont = 0; cont < tamanho_da_palavra;cont++){
            if(palavra[cont] == letra){
                palavra_mascarada[cont] = palavra[cont];
                mensagem ="\nCerto! Essa letra esta palavra\n";
                i++;
            }
        }

        if(i==0){
            mensagem ="\nErrado!Essa letra nao esta na palavra\n";
            tentativas++;
        }
        }
        

       

        
        
    }
    if(palavra_mascarada==palavra){
        limparTela();
        cout << "PARABENS!!! Voce venceu, a palavra realmente era " << palavra;
        cout << "\nDeseja Reiniciar?\n1 - Sim\n2 - Nao\nDigite aqui: ";
        cin >> opcao;
        return opcao;
    } else{
        limparTela();
        cout << "DERROTA!!! Voce perdeu, a palavra era " << palavra;
        cout << "\nDeseja Reiniciar?\n1 - Sim\n2 - Nao\nDigite aqui: ";
        cin >> opcao;
        return opcao;
    }

    
}
void Menu(){
    int opcao = 0;

    while(opcao<1 || opcao>3){
        limparTela();
        cout << "\nJOGO DA FORCA!!!\n";
        cout<< "Digite o numero de sua opcao: \n";
        cout << "1 - Jogar sozinho\n";
        cout << "2 - Jogar em dupla\n";
        cout << "3 - Sobre o jogo\n";
        cout << "4 - Sair\n";
        cout << "Sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            opcao =joga(1);
            if(opcao==1){
                opcao = 0;
            } else{
                limparTela();
                cout << "\nAte mais!!!\n";

            }
        break;

        case 2:
         opcao =joga(2);
            if(opcao==1){
                opcao = 0;
            } else{
                limparTela();
                cout << "\nAte mais!!!\n";

            }
        break;

        case 3:
            limparTela();
            cout << "\nInformacoes sobre o jogo:\n";
            cout << "Este simples jogo foi desenvolvido por David Galhego em 2018 enquanto fazia um curso de c++";
            cout << "\nDeseja Reiniciar?\n1 - Sim\n2 - Nao\nDigite aqui: ";
            cin >> opcao;
            if(opcao==1){
                opcao=0;
            }else{
                cout << "Ate mais!!!";
            }
        break;
        
        case 4:
            cout << "\nAte mais!!!\n";
        break;
        
        default:
            cout << "\nOpcao Invalida, tente novamente!!! \n";
            sleep(2);
        break;
        }
    }
}



int main(){
    srand((unsigned)time(NULL));
    Menu(); 
    return 0;
}




