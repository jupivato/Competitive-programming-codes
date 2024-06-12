#include <bits/stdc++.h>

using namespace std;

int main()
{
    float aux = 700, soma = 0;
    int cont = 0;
    while (aux > 0.0)
    {
        cin >> aux;
        if (aux > 0.0)
        {
            cont++;
            soma += aux;
        }
    }
    cout << setprecision(2) << fixed << soma / cont << endl;
    return 0;
}
