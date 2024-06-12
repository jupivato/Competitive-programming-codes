#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cont = 0;
    double media = 0;
    for (int i = 0; i < 6; ++i)
    {
        double aux;
        cin >> aux;
        if (aux > 0)
        {
            ++cont;
            media += aux;
        }
    }
    
    cout << cont << " valores positivos" << endl;
    cout << setprecision(1) << fixed << media / cont << endl;

    return 0;
}
