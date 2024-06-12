#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cont = 0;
    for (int i = 0; i < 5; ++i)
    {
        int aux;
        cin >> aux;
        if (aux % 2 == 0) ++cont;
    }
    
    cout << cont << " valores pares" << endl;
    return 0;
}
