#include <bits/stdc++.h>

using namespace std;

int main()
{
    int pos = 0, neg = 0, par = 0, imp = 0;
    for (int i = 0; i < 5; ++i)
    {
        int aux;
        cin >> aux;
        if (aux % 2 == 0) ++par;
        else ++imp;
        if (aux > 0) ++ pos;
        else if (aux < 0) ++neg;
    }
    
    cout << par << " valor(es) par(es)" << endl;
    cout << imp << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}
