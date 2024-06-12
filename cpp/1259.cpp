#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant, tam;
    vector<int>pares;
    vector<int>impares;
    cin >> quant;
    while(quant--)
    {
        int aux;
        cin >> aux;
        if (aux % 2 == 0) pares.push_back(aux);
        else impares.push_back(aux);
    }
    sort(pares.begin(), pares.end());
    sort(impares.begin(),impares.end());
    reverse(impares.begin(), impares.end());

    tam = pares.size();
    for (int i = 0; i < tam; ++i) cout << pares[i] << endl;
    tam = impares.size();
    for (int i = 0; i < tam; ++i) cout << impares[i] << endl;

    return 0;
}