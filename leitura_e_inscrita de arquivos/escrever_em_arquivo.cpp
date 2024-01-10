#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int main(){

ofstream Arquivo_de_saida;

Arquivo_de_saida.open("Texto de David.txt", std::ios_base::app);

Arquivo_de_saida << "\nDavid: O Maioral";

Arquivo_de_saida.close();



return 0;
}