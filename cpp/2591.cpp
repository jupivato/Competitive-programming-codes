#include<bits/stdc++.h>

using namespace std;

int main()
{
    int quant;
    cin >> quant;
    while (quant--)
    {
        string h;
        cin >> h;
        int qa1 = 0, qa2 = 0, tam = h.length(), ka;
        bool m1 = true;
        for (int i = 1; i < tam; i++)
        {
            if (m1 && h[i] == 'a') qa1++;
            if (h[i] == 'm') m1 = false;
            if (!m1 && h[i] == 'a') qa2++;
        }
        ka = qa1 * qa2;
        cout << 'k';
        for (int i = 0; i < ka; i++) cout << 'a';
        cout << endl;
    }
    return 0;
}
