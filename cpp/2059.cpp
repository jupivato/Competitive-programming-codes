#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

int main()
{
    int p, j1, j2, r, a, soma;
    bool ehpar = false;
    cin >> p >> j1 >> j2 >> r >> a;
    if (p == 1) ehpar = true;
    soma = j1 + j2;
    if (r == 0 && a == 0)
    {
        if (soma % 2 == 0)
        {
            if (ehpar) cout << "Jogador 1 ganha!" << endl;
            else cout << "Jogador 2 ganha!" << endl;
        }
        else
        {
            if (ehpar) cout << "Jogador 2 ganha!" << endl;
            else cout << "Jogador 1 ganha!" << endl;
        }
    }
    else if (r == 1 && a == 0) cout << "Jogador 1 ganha!" << endl;
    else if (r == 1 && a == 1) cout << "Jogador 2 ganha!" << endl;
    else cout << "Jogador 1 ganha!" << endl;
    return 0;
}
