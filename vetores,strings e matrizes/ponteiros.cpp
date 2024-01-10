#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
    int a = 20; 
    cout << "Valor da variavel a: " << a << " Funcionou? ";
    cout << "\nO endereco de a eh: " << &a << " Funcionou ?";

    int b = 10;

    int *ponteirob=&b;

    cout << "\nvalor de b eh: " << b << " Funcionou? ";

    *ponteirob = 40;

    cout << "\nvalor de b eh: " << b << " Funcionou? ";
    return 0;
}