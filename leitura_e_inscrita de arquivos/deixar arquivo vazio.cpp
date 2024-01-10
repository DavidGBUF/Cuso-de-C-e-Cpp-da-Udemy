#include <stdio.h>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    ofstream meu_arquivo;

    meu_arquivo.open("Texto de David.txt");

    meu_arquivo << "";

    meu_arquivo.close();

    return 0;
}