#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quant, x, y;
    cin >> quant;
    while (quant--)
    {
        int total = 0;
        cin >> x >> y;
        for (int i = min(x,y) + 1; i < max(x,y); i++)
            if (i % 2 != 0) total += i;
        cout << total << endl;
    }
    return 0;
}
