#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <new>

using namespace std;

struct fruta
{
    string cor;
    string nome;
};

int main(){
    fruta *fruta1= new fruta;
    fruta1->cor = "Vermelha";
    fruta1->nome = "Maca";
    cout << "Fruta: " << fruta1->nome << ", Cor: " << fruta1->cor;


    fruta *ponteiroListaFrutas = new fruta[2];

    ponteiroListaFrutas[0].cor = "vermelho";
    ponteiroListaFrutas[0].nome = "morango";
    ponteiroListaFrutas[1].cor = "Amarelo";
    ponteiroListaFrutas[1].nome = "banana";

    for(int i =0; i<2;i++){
        cout <<"\nFruta: " << ponteiroListaFrutas[i].nome <<", Cor: " << ponteiroListaFrutas[i].cor;
    }


    return 0;
}
