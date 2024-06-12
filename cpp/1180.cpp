#include <bits/stdc++.h>
#define MAX 1000

using namespace std;

int main()
{
    int vet[MAX], menor = 0x3f3f3f3f, pos, tam;
    cin >> tam;
    for (int i = 0; i < tam; i++)
    {
        cin >> vet[i];
        if (vet[i] < menor) 
        {
            menor = vet[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}