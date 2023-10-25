// Exercicio1_PneuCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int PressaoDesejada;
    int PressaoLida;
    int Diferenca;

    cin >> PressaoDesejada;
    cin >> PressaoLida;

    if (PressaoDesejada < 1 || PressaoDesejada > 41)
    {
        return 0;
    }

    if (PressaoLida < 1 || PressaoLida > 41)
    {
        return 0;
    }

    Diferenca = PressaoDesejada - PressaoLida;

    cout << Diferenca;
}
