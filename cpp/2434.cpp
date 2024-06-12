#include<bits/stdc++.h>

using namespace std;

int main()
{
    int dias, valor, menor;
    cin >> dias >> valor;
    menor = valor;
    for (int i = 0; i < dias; i++)
    {
        int aux;
        cin >> aux;
        valor += aux;
        if (valor < menor) menor = valor;
    }
    cout << menor << endl;

    return 0;
}