#include <bits/stdc++.h>
#define INF 0x3F3F3F3F // valor de infinito
using namespace std;

int main()
{
    int quant;
    cin >> quant;
    while(quant--)
    {
        double a, b, c, d;
        int cont = 0;
        cin >> a >> b >> c >> d;
        double cresca, crescb;
        while (a <= b)
        {
            if (cont > 100) break;
            cresca = c / 100;
            crescb = d / 100;
            a += (a*cresca);
            b += (b*crescb);
            if (a != (int)a) a = (int)a;
            if (b != (int)b) b = (int)b;
            cont++;
        }
        if (cont > 100) cout << "Mais de 1 seculo." << endl;
        else cout << cont << " anos." << endl;
    }
    return 0;
}