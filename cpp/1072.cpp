#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quant, in = 0, out = 0;
    cin >> quant;
    while (quant--)
    {
        int aux;
        cin >> aux;
        if (aux >= 10 && aux <= 20) ++in;
        else ++out;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    
    return 0;
}
