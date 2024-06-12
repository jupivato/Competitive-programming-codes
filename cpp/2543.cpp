#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant, mat;
    while (cin >> quant >> mat)
    {
        int cont = 0;
        while (quant--)
        {
            int num, jogo;
            cin >> num >> jogo;
            if (num == mat && jogo == 0) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}