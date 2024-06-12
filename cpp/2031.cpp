#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant;
    cin >> quant;
    while (quant--)
    {
        string n1, n2;
        cin >> n1 >> n2;
        if (n1 == "ataque")
        {
            if (n2 == "ataque") cout << "Aniquilacao mutua" << endl;
            else cout << "Jogador 1 venceu" << endl;
        }
        else if (n1 == "pedra")
        {
            if (n2 == "ataque") cout << "Jogador 2 venceu" << endl;
            else if (n2 == "pedra") cout << "Sem ganhador" << endl;
            else cout << "Jogador 1 venceu" << endl;
        }
        else if (n1 == "papel")
        {
            if (n2 == "papel") cout << "Ambos venceram" << endl;
            else cout << "Jogador 2 venceu" << endl;
        }
    }
    return 0;
}
