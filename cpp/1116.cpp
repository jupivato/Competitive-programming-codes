#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, quant;
    cin >> quant;
    while (quant--)
    {
        float res;
        cin >> x >> y;
        if (y == 0) cout << "divisao impossivel" << endl;
        else
        {
            res = x * 1.0 / y * 1.0;
            cout << setprecision(1) << fixed << res << endl;
        }
    }
}
