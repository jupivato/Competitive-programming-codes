#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quant = 0;
    float x, media = 0;
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
    return 0;
}
