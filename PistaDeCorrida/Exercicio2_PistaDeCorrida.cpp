// PistaDeCorrida.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
    int metrosPretendidos;
    int comprimentoDaPista;

    cin >> metrosPretendidos >> comprimentoDaPista;

    int resul = metrosPretendidos % comprimentoDaPista;

    cout << resul;
}