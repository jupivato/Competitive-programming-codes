#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quant = 0, op = 1;
    float x, media = 0;
    while (op == 1)
    {
        quant = 0;
        media = 0;
        while (quant < 2)
        {
            cin >> x;
            if (x >= 0 && x <= 10)
            {
                media += x;
                quant++;
            }
            else cout << "nota invalida" << endl;
        }
        cout << "media = " << setprecision(2) << fixed << media / 2 << endl;
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> op;
        while (op != 1 && op != 2)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> op;
        }
    }
    return 0;
}
