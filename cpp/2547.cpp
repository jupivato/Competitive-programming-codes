#include<bits/stdc++.h>

using namespace std;

int main()
{   
    int quant, min, max;
    while (cin >> quant >> min >> max)
    {
        int cont = 0;
        for (int i = 0; i < quant; i++)
        {
            int aux;
            cin >> aux;
            if (aux >= min && aux <= max) cont++;
        }
        cout << cont << endl;
    }
    return 0;
}