#include <bits/stdc++.h>

using namespace std;

int main()
{
    int in, gr, op = 1, vg = 0, vi = 0, em = 0, cont = 0;
    while (op == 1)
    {
        cont++;
        cin >> in >> gr;
        if (in > gr) vi++;
        else if (in < gr) vg++;
        else em++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> op;
    }
    cout << cont << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << em << endl;
    if (vi > vg) cout << "Inter venceu mais" << endl;
    else if (vi < vg) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl; 
    return 0;
}
