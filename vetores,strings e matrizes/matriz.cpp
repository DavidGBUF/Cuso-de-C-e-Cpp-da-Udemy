#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;


int main(){
    int matriz[3][3];
    matriz[0][0]=1;
    matriz[0][1]=2;
    matriz[0][2]=3;
    matriz[1][0]=4;
    matriz[1][1]=5;
    matriz[1][2]=6;
    matriz[2][0]=7;
    matriz[2][1]=8;
    matriz[2][2]=9;

    for(int linha = 0; linha <3 ; linha++){
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }
        cout << "\n";
        
    }

    cout << "\n";

    for(int linha = 0; linha <3 ; linha++){
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout <<"\nDigite o valor do elemento ["<<linha<<","<<coluna<<"] : ";
            cin >> matriz[linha][coluna];
        }
        
        
    }


     for(int linha = 0; linha <3 ; linha++){
        for (int coluna = 0; coluna < 3; coluna++)
        {
            cout << matriz[linha][coluna] << " ";
        }
        cout << "\n";
        
    }


    return 0;
}