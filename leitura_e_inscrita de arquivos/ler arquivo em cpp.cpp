#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream input("Texto de David.txt");

    string texto_lido;

    for(string line; getline(input, line);){

        texto_lido+=line;
         texto_lido+="\n";
    }
    cout << texto_lido;

    return 0;
}