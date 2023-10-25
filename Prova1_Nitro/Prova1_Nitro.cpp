// Exercicio1_PneuCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    string A;
    string AA;
    cin >> A;
    
    int B = pow(10, 4);

    if (A.length() <= 1 || A.length() > B)
    {
        return 0;
    }
    
    transform(A.begin(), A.end(), A.begin(), tolower);

    AA = A.substr(0, A.length() / 2);

    while (AA.size() < A.size())
    {
        AA.append(AA);
    }

    if (AA.compare(A) == 0)
    {
        cout << "Valido";

    }
    else
    {
        cout << "INVALIDO";
    }
}