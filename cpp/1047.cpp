#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2, horas, minutos, minSaida, minChegada, minTotal, ht, mt;
    cin >> h1 >> m1 >> h2 >> m2;
    minSaida = (h1 * 60) + m1;
    minChegada = (h2 * 60) + m2;
    minTotal = minChegada - minSaida;
    if (minTotal < 0) minTotal = 1440 + minTotal;
    if (minTotal == 0)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    }
    ht = minTotal / 60;
    mt = minTotal - (ht * 60);
    cout << "O JOGO DUROU " << ht << " HORA(S) E " << mt << " MINUTO(S)" << endl;
    return 0;
}