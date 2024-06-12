#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quant, x, y;
    cin >> quant;
    while (quant--)
    {
        cin >> x >> y;
        int total = 0;
        int cont = 0;
        while (cont < y)
        {
            if (x % 2 != 0)
            {
                total += x;
                cont++;
            }
            x++;
        }
        cout << total << endl;
    }
    return 0;
}
